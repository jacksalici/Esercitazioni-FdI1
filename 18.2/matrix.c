
#include "matrix.h"
#include <stdlib.h>

struct matrix *newmatq(size_t r) {
	
	double *data = malloc(r*r * sizeof(double));
	struct matrix mat = { r, r, data };
	return &mat;
}


struct matrix *mat_rendiquadrata(const struct matrix *a) {
	size_t r, diff, j, i;
	if (a->cols > a->rows) {
		r = a->cols;
		diff = a->cols - a->rows;
	}
	else {
		r = a->rows;
		diff = a->rows - a->cols;
	}


	struct matrix *q = newmatq(r);

	for (i = 0; i < r; i++) {
		for (j = 0; j < r; j++) {
			if ((i < (a->rows)) && (j < (a->cols))) 
				q->data[i*r + j] = a->data[i*(a->rows) + j];
			else
				q->data[i*r + j] = 0;
			}
		
		}
		return 0;
	}

