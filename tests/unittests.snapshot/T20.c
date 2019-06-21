/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: krml -I ../../src/lowparse -skip-compilation -tmpdir ../unittests.snapshot -bundle LowParse.\* -drop FStar.Tactics.\* -drop FStar.Reflection.\* T10.fst T11.fst T11_z.fst T12.fst T12_z.fst T13.fst T13_x.fst T14.fst T14_x.fst T15_body.fst T15.fst T16.fst T16_x.fst T17.fst T17_x_a.fst T17_x_b.fst T18.fst T18_x_a.fst T18_x_b.fst T19.fst T1.fst T20.fst T21.fst T22_body_a.fst T22_body_b.fst T22.fst T23.fst T24.fst T24_y.fst T25_bpayload.fst T25.fst T25_payload.fst T26.fst T27.fst T28.fst T29.fst T2.fst T30.fst T31.fst T32.fst T33.fst T34.fst T35.fst T36.fst T3.fst T4.fst T5.fst T6.fst T6le.fst T7.fst T8.fst T8_z.fst T9_b.fst T9.fst Tag2.fst Tag.fst Tagle.fst -warn-error +9
  F* version: 74c6d2a5
  KreMLin version: 1bd260eb
 */

#include "T20.h"

bool T20_uu___is_X_x(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_x)
    return true;
  else
    return false;
}

bool T20_uu___is_X_y(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_y)
    return true;
  else
    return false;
}

Prims_list__FStar_Bytes_bytes *T20___proj__X_y__item___0(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_y)
    return projectee.case_X_y;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

bool T20_uu___is_X_w(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_w)
    return true;
  else
    return false;
}

uint16_t T20___proj__X_w__item___0(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_w)
    return projectee.case_X_w;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

bool T20_uu___is_X_v(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_v)
    return true;
  else
    return false;
}

uint16_t T20___proj__X_v__item___0(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_v)
    return projectee.case_X_v;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

bool T20_uu___is_X_t(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_t)
    return true;
  else
    return false;
}

uint16_t T20___proj__X_t__item___0(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_t)
    return projectee.case_X_t;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

bool T20_uu___is_X_z(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_z)
    return true;
  else
    return false;
}

uint16_t T20___proj__X_z__item___0(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_z)
    return projectee.case_X_z;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

bool T20_uu___is_X_Unknown_tag2(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_Unknown_tag2)
    return true;
  else
    return false;
}

uint8_t T20___proj__X_Unknown_tag2__item__v(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_Unknown_tag2)
    return projectee.case_X_Unknown_tag2.v;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

uint16_t T20___proj__X_Unknown_tag2__item__x(T20_t20_ projectee)
{
  if (projectee.tag == T20_X_Unknown_tag2)
    return projectee.case_X_Unknown_tag2.x;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

Tag2_tag2 T20_tag_of_t20(T20_t20_ x)
{
  if (x.tag == T20_X_x)
    return ((Tag2_tag2){ .tag = Tag2_X });
  else if (x.tag == T20_X_y)
    return ((Tag2_tag2){ .tag = Tag2_Y });
  else if (x.tag == T20_X_w)
    return ((Tag2_tag2){ .tag = Tag2_W });
  else if (x.tag == T20_X_v)
    return ((Tag2_tag2){ .tag = Tag2_V });
  else if (x.tag == T20_X_t)
    return ((Tag2_tag2){ .tag = Tag2_T });
  else if (x.tag == T20_X_z)
    return ((Tag2_tag2){ .tag = Tag2_Z });
  else if (x.tag == T20_X_Unknown_tag2)
  {
    uint8_t v1 = x.case_X_Unknown_tag2.v;
    return ((Tag2_tag2){ .tag = Tag2_Unknown_tag2, ._0 = v1 });
  }
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

uint32_t T20_t20_validator(Tag2_tag2 k, LowParse_Slice_slice input, uint32_t pos)
{
  LowParse_Spec_Enum_maybe_enum_key__Tag2_tag2_uint8_t scrut;
  if (k.tag == Tag2_Unknown_tag2)
  {
    uint8_t y = k._0;
    scrut =
      (
        (LowParse_Spec_Enum_maybe_enum_key__Tag2_tag2_uint8_t){
          .tag = LowParse_Spec_Enum_Unknown,
          { .case_Unknown = y }
        }
      );
  }
  else
  {
    Tag2_tag2 x = k;
    scrut =
      (
        (LowParse_Spec_Enum_maybe_enum_key__Tag2_tag2_uint8_t){
          .tag = LowParse_Spec_Enum_Known,
          { .case_Known = x }
        }
      );
  }
  if (scrut.tag == LowParse_Spec_Enum_Known)
  {
    Tag2_tag2 k1 = scrut.case_Known;
    if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_X }), k1))
      return LOWPARSE_LOW_BASE_VALIDATOR_ERROR_GENERIC;
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_Y }), k1))
      return T4_t4_validator(input, pos);
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_Z }), k1))
      if (input.len - pos < (uint32_t)2U)
        return LOWPARSE_LOW_BASE_VALIDATOR_ERROR_NOT_ENOUGH_DATA;
      else
        return pos + (uint32_t)2U;
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_T }), k1))
      if (input.len - pos < (uint32_t)2U)
        return LOWPARSE_LOW_BASE_VALIDATOR_ERROR_NOT_ENOUGH_DATA;
      else
        return pos + (uint32_t)2U;
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_V }), k1))
      if (input.len - pos < (uint32_t)2U)
        return LOWPARSE_LOW_BASE_VALIDATOR_ERROR_NOT_ENOUGH_DATA;
      else
        return pos + (uint32_t)2U;
    else if (input.len - pos < (uint32_t)2U)
      return LOWPARSE_LOW_BASE_VALIDATOR_ERROR_NOT_ENOUGH_DATA;
    else
      return pos + (uint32_t)2U;
  }
  else if (scrut.tag == LowParse_Spec_Enum_Unknown)
    if (input.len - pos < (uint32_t)2U)
      return LOWPARSE_LOW_BASE_VALIDATOR_ERROR_NOT_ENOUGH_DATA;
    else
      return pos + (uint32_t)2U;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}

uint32_t T20_t20_jumper(Tag2_tag2 k, LowParse_Slice_slice input, uint32_t pos)
{
  LowParse_Spec_Enum_maybe_enum_key__Tag2_tag2_uint8_t scrut;
  if (k.tag == Tag2_Unknown_tag2)
  {
    uint8_t y = k._0;
    scrut =
      (
        (LowParse_Spec_Enum_maybe_enum_key__Tag2_tag2_uint8_t){
          .tag = LowParse_Spec_Enum_Unknown,
          { .case_Unknown = y }
        }
      );
  }
  else
  {
    Tag2_tag2 x = k;
    scrut =
      (
        (LowParse_Spec_Enum_maybe_enum_key__Tag2_tag2_uint8_t){
          .tag = LowParse_Spec_Enum_Known,
          { .case_Known = x }
        }
      );
  }
  if (scrut.tag == LowParse_Spec_Enum_Known)
  {
    Tag2_tag2 k1 = scrut.case_Known;
    if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_X }), k1))
      return pos + (uint32_t)0U;
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_Y }), k1))
      return T4_t4_jumper(input, pos);
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_Z }), k1))
      return pos + (uint32_t)2U;
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_T }), k1))
      return pos + (uint32_t)2U;
    else if (__eq__Tag2_tag2(((Tag2_tag2){ .tag = Tag2_V }), k1))
      return pos + (uint32_t)2U;
    else
      return pos + (uint32_t)2U;
  }
  else if (scrut.tag == LowParse_Spec_Enum_Unknown)
    return pos + (uint32_t)2U;
  else
  {
    KRML_HOST_EPRINTF("KreMLin abort at %s:%d\n%s\n",
      __FILE__,
      __LINE__,
      "unreachable (pattern matches are exhaustive in F*)");
    KRML_HOST_EXIT(255U);
  }
}
