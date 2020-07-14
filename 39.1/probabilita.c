#include<stdint.h>
#include<stdlib.h>
double sommatoria(const uint32_t *v, size_t n) {
	double sum = 0;
	size_t i;
	for (i = 0; i < n; i++) {
		sum += v[i];
	}
	return sum;
}
double *probabilita(const uint32_t *v, size_t n) {
	if ((v == NULL) || (n == 0)) { 
		return NULL;
	}
	size_t i, j = 0;
	for (i = 0; i < n; i++) {
		if (v[j] == 0)
			j++;
	}
	if (j == n)
		return NULL;
	double *prob = malloc(n * sizeof(double));
	
	for (i = 0; i < n; i++) {
		prob[i] = v[i] / sommatoria(v, n);
	}
	return prob;
}