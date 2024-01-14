#ifndef UTIL_H_
#define UTIL_H_

#define BYTE unsigned char

#define MAX(x,y) 	((x) < (y) ? (y) : (x))
#define MIN(x,y)	((x) > (y) ? (y) : (x))

void BornerByte(BYTE *val, BYTE valMax, BYTE valMin);

#endif
