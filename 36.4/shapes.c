#include"shapes.h"

bool line_load(FILE *f, struct line *pln) {

	size_t cnt;
	cnt = fread(pln->x1, 2, 1, f);
	if (cnt != 1)
		return false;
	cnt = fread(pln->x2, 2, 1, f);
	if (cnt != 1)
		return false;
	cnt = fread(pln->y1, 2, 1, f);
	if (cnt != 1)
		return false;
	cnt = fread(pln->y2, 2, 1, f);
	if (cnt != 1)
		return false;
	cnt = fread(pln->thickness, 1, 1, f);
	if (cnt != 1)
		return false;
	return true;
}