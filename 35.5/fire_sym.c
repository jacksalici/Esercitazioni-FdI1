#include"fire_sym.h"

void propagate_fire(const struct forest *f) {
	char foe[f->rows*f->cols];
	for (size_t i = 0; i < f->rows; i++) {
		for (size_t j = 0; j < f->cols; j++) {
			if (f->data[i*f->cols + j] == 'F')
				foe[i*f->cols + j] = 'F';
			else if ((j != 0) && (f->data[i*f->cols + j - 1] == 'F'))
				foe[i*f->cols + j] = 'F';
			else if ((j != f->cols-1) && (f->data[i*f->cols + j + 1] == 'F'))
				foe[i*f->cols + j] = 'F';
			else if ((i != 0) && (f->data[(i-1)*f->cols + j] == 'F'))
				foe[i*f->cols + j] = 'F';
			else if ((i != f->rows-1) && (f->data[(i + 1)*f->cols + j] == 'F'))
				foe[i*f->cols + j] = 'F';
			else
				foe[i*f->cols + j] = '.';
		}
	}
	for (size_t i = 0; i < f->rows; i++) {
		for (size_t j = 0; j < f->cols; j++) {
			f->data[i*f->cols + j] = foe[i*f->cols + j];
		}
	}

}