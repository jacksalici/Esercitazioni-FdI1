#include "matrix.h"
#include <stdlib.h>


struct matrix *mat_constructor(struct matrix *m, size_t rows, size_t cols){
	m->rows = rows;
	m->cols = cols;
	m->data = malloc(rows*cols * sizeof(double));
	return m;
}

struct matrix *new_mat(size_t rows, size_t cols) {
	return (mat_constructor(malloc(sizeof(struct matrix)), rows, cols));
}


struct matrix *matrix_quadruplica(const struct matrix *m) {
	if (m == NULL)
		return NULL;
	
	struct matrix *q = new_mat(2 * m->rows, 2 * m->cols);
	size_t i, j;
	for (i = 0; i < q->rows; i++) {
		for (j = 0; j < q->cols; j++) {
			q->data[i*q->cols + j] = m->data[(i%m->rows)*m->cols + (j%m->cols)];
		}
	}
	return q;

}