#ifndef MATRIX_H
#define MATRIX_H
#include <stdint.h>
struct matrix {
	size_t rows, cols;
	double *data;
};

extern struct matrix *matrix_flip_h(const struct matrix *m);


#endif // !MATRIX_H
