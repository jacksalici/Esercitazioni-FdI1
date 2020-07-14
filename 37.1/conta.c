#include<string.h>
#include<ctype.h>
#include <stdio.h>
size_t contanumeri(const char* nomefile) {
	size_t nu = 0;
	FILE *f = fopen(nomefile, "rb");
	char c;
	while ((c = fgetc(f)) != EOF) {
		if (isdigit(c))
			nu++;
	}
	fclose(f);
	return nu;

}
