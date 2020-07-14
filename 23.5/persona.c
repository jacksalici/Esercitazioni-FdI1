#define _CRT_SECURE_NO_WARNINGS
#include"persona.h"

struct persona *leggi_persone(const char *filename, size_t *size) {
	FILE *f = fopen("filename", "r");
	int dim;
	fscanf("%i", &dim);
	*size = (size_t)dim;



	return NULL;
}