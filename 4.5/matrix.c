#include"matrix.h"

struct matrix *mat_constructor(struct matrix *m, size_t rows, size_t cols) {
	m->rows = rows;
	m->cols = cols;
	m->data = malloc(rows * cols * sizeof(double));
	return m;
}

struct matrix *new_mat(size_t rows, size_t cols) {
	return mat_constructor(malloc(sizeof(struct matrix)), rows, cols);
}

struct matrix *mirror_mat(const struct matrix *m) {

	if (m == NULL) {
		return NULL;
	}

	struct matrix *flipped = new_mat(m->rows, m->cols);
	size_t i, j;
	for (i = 0; i < m->rows; i++) {
		for (j = 0; j < m->cols; j++) {
			flipped->data[i*flipped->cols + j] = m->data[i*m->cols + m->cols - 1 - j];
		}
	}

	return flipped;
}