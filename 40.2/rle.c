#define _CRT_SECURE_NO_WARNINGS
#include"rle.h"

bool easy_rle_decode(const char* nomefilein, const char* nomefileout) {
	FILE *in = fopen(nomefilein, "rb");
	FILE *out = fopen(nomefileout, "wb");

	if ((in == NULL) || (out == NULL)) {
		fclose(in);
		fclose(out);
		return false;
	}
	unsigned int n, i;
	char c;
	while (!feof(in)) {
		fread(&n, 1, 1, in);
		fread(&c, 1, 1, in);
		for (i = 0; i < (n + 1); i++) {
			fwrite(&c, 1, 1, out);
		}
	}
	fclose(in);
	fclose(out);
	return true;
}