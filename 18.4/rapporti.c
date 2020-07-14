
#define _CRT_SECURE_NO_WARNINGS
#include"rapporti.h"
#include <stdio.h>

struct rapporto *leggi_rapporti(const char *filename, uint16_t *n) {
	FILE *f = fopen(filename, "rb");

	fread(n, 2, 1, f);


	return NULL;
}
 
