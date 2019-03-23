module LowParse.Spec.BCVLI
include LowParse.Spec.BoundedInt // for bounded_integer

module U32 = FStar.UInt32
module Seq = FStar.Seq

inline_for_extraction
let parse_bcvli_kind = {
  parser_kind_low = 1;
  parser_kind_high = Some 5;
  parser_kind_subkind = Some ParserStrong;
  parser_kind_metadata = None;
}

val parse_bcvli : parser parse_bcvli_kind U32.t

val parse_bcvli_eq (b: bytes) : Lemma
  (parse parse_bcvli b == (match parse (parse_bounded_integer_le 1) b with
  | None -> None
  | Some (x32, consumed_x) ->
    let x = U32.v x32 in
    if x <= 252 then Some (x32, consumed_x) else
    let b' = Seq.slice b consumed_x (Seq.length b) in
    if x = 253 then
      match parse (parse_bounded_integer_le 2) b' with
      | None -> None
      | Some (y, consumed_y) ->
        if U32.v y < 253 then None (* redundant representations not supported, non-malleability *) else Some (y, consumed_x + consumed_y)
    else if x = 254 then
      match parse (parse_bounded_integer_le 4) b' with
      | None -> None
      | Some (y, consumed_y) ->
        if U32.v y < 65536 then None (* redundant representations not supported, non-malleability *) else Some (y, consumed_x + consumed_y)
    else None (* 64-bit integers not supported *)
  ))

val serialize_bcvli : serializer parse_bcvli

val serialize_bcvli_eq (x: U32.t) : Lemma
  (serialize serialize_bcvli x == (
  let c1 : bounded_integer 1 =
    if U32.v x <= 252 then
      x
    else if U32.v x <= 65535 then
      253ul
    else
      254ul
  in
  Seq.append
    (serialize (serialize_bounded_integer_le 1) c1)
    (
      if U32.v c1 <= 252 then Seq.empty else
      if U32.v c1 = 253 then serialize (serialize_bounded_integer_le 2) x else
      serialize (serialize_bounded_integer_le 4) x
    )
  ))
