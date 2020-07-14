#define _CRT_SECURE_NO_WARNINGS
#include"matrix.h"

bool matrix_read(struct matrix *m, FILE *f) {
	int r = fscanf(f, " %d %d ", &m->rows, &m->cols);
	if (r != 2)
		return false;
	m->data = malloc((m->cols)*(m->rows) * sizeof(double));
	for (size_t t = 0; t < ((m->cols)*(m->rows)); t++) {
		int r = fscanf(f, " %lf ", &m->data[t]);
		if (r != 1)
			return false;
	}

	return true;

}
