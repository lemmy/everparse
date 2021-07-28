#include "OrderedPairWrapper.h"
#include "EverParse.h"
#include "OrderedPair.h"
void OrderedPairEverParseError(const char *StructName, const char *FieldName, const char *Reason);

static
void DefaultErrorHandler(
	const char *typename,
	const char *fieldname,
	const char *reason,
	uint8_t *context,
	EverParseInputBuffer input,
	uint32_t start_pos)
{
	EverParseErrorFrame *frame = (EverParseErrorFrame*)context;
	EverParseDefaultErrorHandler(
		typename,
		fieldname,
		reason,
		frame,
		input,
		start_pos
	);
}

BOOLEAN OrderedPairCheckOrderedPair(uint8_t *base, uint32_t len) {
	EverParseErrorFrame frame;
	frame.filled = FALSE;
	uint32_t position = 0;
	EverParseInputBuffer input = EverParseMakeInputBuffer(base, len, &position);
	uint64_t result = OrderedPairValidateOrderedPair( (uint8_t*)&frame, &DefaultErrorHandler, input);
	if (EverParseResultIsError(result))
	{
		if (frame.filled)
		{
			OrderedPairEverParseError(frame.typename, frame.fieldname, frame.reason);
		}
		return FALSE;
	}
	return TRUE;
}
