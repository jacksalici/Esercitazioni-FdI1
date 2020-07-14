#include <stdint.h>
#include <stdlib.h>

int *rotate(const int *vec, size_t len, size_t r) {
	if (vec == NULL)
		return NULL;
	int *t = malloc(len * sizeof(int));
	size_t y;
	for (size_t i = 0; i < len; i++) {
		y = i + (r%len);
		if (y >= len) {
			y -= len;
		}
		if (y < 0) {
			y += len;
		}
		t[y] = vec[i];
	}
	return t;
}