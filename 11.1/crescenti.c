#include <stdbool.h>


bool crescente(unsigned int c) {
	unsigned int r1, r2;
	r1 = c % 10;
	c = c / 10;

	while (c != 0) {
		r2 = c % 10;
		c = c / 10;
		if (r2 <= r1)
		{
			return false;
		}
		else
		{
			r1 = r2;
		}
	}
	return true;
}