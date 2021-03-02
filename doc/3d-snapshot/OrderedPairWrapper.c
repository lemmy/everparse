#include "OrderedPairWrapper.h"
#include "EverParse.h"
#include "OrderedPair.h"
void OrderedPairEverParseError(char *x, char *y, char *z);
static char* OrderedPairStructNameOfErr(uint64_t err) {
	switch (EverParseFieldIdOfResult(err)) {
		case 1: return "Triangle2._point";
		case 2: return "Triangle2._point";
		case 3: return "Triangle2._triangle";
		case 4: return "Triangle._point";
		case 5: return "Triangle._point";
		case 6: return "TaggedUnion._int_payload";
		case 7: return "TaggedUnion._int_payload";
		case 8: return "TaggedUnion._int_payload";
		case 9: return "TaggedUnion._integer";
		case 10: return "Smoker._smoker";
		case 11: return "Smoker._smoker";
		case 12: return "ReadPair._Pair";
		case 13: return "ReadPair._Pair";
		case 14: return "OrderedPair._orderedPair";
		case 15: return "OrderedPair._orderedPair"; 
		default: return "";
	}
}

static char* OrderedPairFieldNameOfErr(uint64_t err) {
	switch (EverParseFieldIdOfResult(err)) {
		case 1: return "x";
		case 2: return "y";
		case 3: return "corners";
		case 4: return "x";
		case 5: return "y";
		case 6: return "value8";
		case 7: return "value16";
		case 8: return "value32";
		case 9: return "size";
		case 10: return "age";
		case 11: return "cigarettesConsumed";
		case 12: return "first";
		case 13: return "second";
		case 14: return "lesser";
		case 15: return "greater"; 
		default: return "";
	}
}

BOOLEAN OrderedPairCheckOrderedPair(uint8_t *base, uint32_t len) {
	uint64_t result = OrderedPairValidateOrderedPair(len, base, 0);
	if (EverParseResultIsError(result)) {
		OrderedPairEverParseError(
	OrderedPairStructNameOfErr(result),
			OrderedPairFieldNameOfErr (result),
			EverParseErrorReasonOfResult(result));
		return FALSE;
	}
	return TRUE;
}
