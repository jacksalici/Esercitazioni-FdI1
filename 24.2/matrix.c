	#include"matrix.h"
	#include <stdlib.h>


	struct matrix *mat_constructor(struct matrix *m, size_t rows, size_t cols) {
		m->cols = cols;
		m->rows = rows;
		m->data = malloc(rows*cols * sizeof(double));
		return m;
	}

	struct matrix *new_mat(size_t rows, size_t cols) {
		return mat_constructor(malloc(sizeof(struct matrix)), rows, cols);
	}

	struct matrix *matrix_flip_h(const struct matrix *m) {
		if (m == NULL)
			return NULL;
	
		struct matrix *f = new_mat(m->rows, m->cols);
		size_t i, j;
		for (i = 0; i < m->rows; i++) {
			for (j = 0; j < m->cols; j++) {
				f->data[i*(f->cols) + j] = m->data[i*(m->cols) + (m->cols - 1 - j)];
			}
		}

		return f;
	}