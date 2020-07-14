#include"vec_double.h"
#include <stdlib.h>
struct vec_double *read_vec_double(const char *filename) {
	FILE *f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	struct vec_double *vet = malloc(sizeof(struct vec_double));

	if (fread(&vet->size, 4, 1, f) != 1) {
		
		free(vet);
		fclose(f);

		return NULL;
	}
		

	vet->data = malloc(vet->size * sizeof(double));

	if (fread(vet->data, 8, vet->size, f) != vet->size) {
		free(vet->data);
		free(vet);
		fclose(f);

		return NULL;

	}




	fclose(f);
	return vet;
}
