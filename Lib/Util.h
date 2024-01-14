#ifndef UTIL_H_
#define UTIL_H_

#define BYTE 	unsigned char
#define U16	unsigned short
#define S16	short

#define MAX(x,y) 	((x) < (y) ? (y) : (x))
#define MIN(x,y)	((x) > (y) ? (y) : (x))

void BornerByte(BYTE *val, BYTE valMax, BYTE valMin);
void BornerS16(S16 *val, S16 max, S16 min);
void BornerU16(U16 *val, U16 max, U16 min);

#endif
