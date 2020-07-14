#define _CRT_SECURE_NO_WARNINGS
#include"leggi_stringhe.h"


char **leggi_stringhe(const char *filename, size_t *size) {
	*size = 0;
	char c;
	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	while ((c = fgetc(f)) != EOF) {
		if (c == 0) {
			*size++;
		}
	}
	char **vett_str = malloc((*size) * sizeof(char*));
	rewind(f);
	for (size_t n_str = 0; n_str < *size; n_str++) {
		int pos = ftell(f);
		size_t lung_parola = 0;

		while ((c = fgetc(f)) != 0) {
			lung_parola++;
		}


		(*vett_str)[n_str] = malloc((lung_parola + 1) * sizeof(char));

		fseek(f, pos, SEEK_CUR);
		size_t i;
		for (i = 0; i < lung_parola; ) {
			c = fgetc(f);
			vett_str[n_str][i] = c;
			i++;
		}
		vett_str[n_str][i] = 0;
	}
	fclose(f);
	return (vett_str);
}
