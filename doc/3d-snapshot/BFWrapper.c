#include "BFWrapper.h"
#include "EverParse.h"
#include "BF.h"
void BFEverParseError(const char *StructName, const char *FieldName, const char *Reason);

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

BOOLEAN BfCheckDummy(uint8_t *base, uint32_t len) {
	EverParseErrorFrame frame;
	frame.filled = FALSE;
	uint32_t position = 0;
	EverParseInputBuffer input = EverParseMakeInputBuffer(base, len, &position);
	uint64_t result = BfValidateDummy( (uint8_t*)&frame, &DefaultErrorHandler, input);
	if (EverParseResultIsError(result))
	{
		if (frame.filled)
		{
			BFEverParseError(frame.typename, frame.fieldname, frame.reason);
		}
		return FALSE;
	}
	return TRUE;
}
