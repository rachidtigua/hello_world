#include "Util.h"

void BornerByte(BYTE *val, BYTE max, BYTE min)
{
	if (*val > max)
		*val = max;
	if (*val < min)
		*val = min;
}

void BornerS16(S16 *val, S16 max, S16 min)
{
	if (*val > max)
		*val = max;
	if (*val < min)
		*val = min;
}

void BornerU16(U16 *val, U16 max, U16 min)
{
	if (*val > max)
		*val = max;
	if (*val < min)
		*val = min;
}
