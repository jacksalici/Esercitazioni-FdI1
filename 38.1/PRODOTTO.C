#include <stdlib.h>


int *prodotto(const int *v, size_t n) {
	if ((v == NULL) || (n < 2))
		return NULL;
	
	int *p = malloc(n * sizeof(int));
	
	for (size_t i = 0; i < n; i++) {
		p[i] = 1;
		for (size_t j = 0; j < n; j++) {
			if (j != i) {
				p[i] *= v[j];
			}
		}
	}
	return p;
}