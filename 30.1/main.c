#include <stdint.h>


extern int *rotate(const int *vec, size_t len, size_t r);


int main(void) {
	int vec[4] = { 1, 2, 3, 4 };
	size_t r = 1;

	int *rot = rotate(vec, 4, 9);


}