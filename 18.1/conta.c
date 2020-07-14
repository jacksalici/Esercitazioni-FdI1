#include <string.h>
#include <ctype.h>
#include <stdio.h>

unsigned int contalettere(const char* nomefile) {
	
	unsigned int nlettere = 0;
	char c;
	FILE *f = fopen(nomefile, "r");
	while ((c = fgetc(f)) != EOF) {
		if (isalpha(c) != 0)
			nlettere++;
	}
	fclose(f);
	return nlettere;
}
