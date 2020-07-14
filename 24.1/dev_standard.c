#include"dev_standard.h"
#include <math.h>



double calcola_dev(const double *vec, size_t size) {
	double sum=0;
	double media = 0;
	for (size_t i = 0; i < size; i++)
		media += vec[i];
	media /= size;

	for (size_t i = 0; i < size; i++) {
		sum = sum + (pow((vec[i] - media), 2));
	}

	return sqrt(sum / size);
}