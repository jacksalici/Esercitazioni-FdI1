#include"matrix.h"

int main(void) {
	double t[6] = { 1,3,2,2,3,1 };
	struct matrix matrix = { 2,3,t };

	struct matrix *flipped = matrix_flip_h(&matrix);
}