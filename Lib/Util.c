#include "Util.h"

void BornerByte(BYTE *val, BYTE max, BYTE min)
{
	if (*val > max)
		*val = max;
	if (*val < min)
		*val = min;
}
