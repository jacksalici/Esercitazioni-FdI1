#include<string.h>
#include <stdlib.h>

long long contacifre(long long a) {
	long long n = 0;
	while (a != 0) {
		a /= 10;
		n++;
	}
	return n;
}

char *sottrai_stringhe(const char *a, const char *b) {
	if ((a == NULL) || (b == NULL))
		return NULL;

/*	long long na, nb, nc, cfr;
	char r;

	na = atoll(a);
	nb = atoll(b);
	nc = na - nb;
	cfr = contacifre(nc);
	char *c = malloc((cfr+1)*sizeof(char));

	for (long long i = 0; i < cfr; i++) {
		r = nc % 10;
		nc /= 10;
		c[cfr - 1 - i] = r;
	}
	c[cfr] = 0;*/

	char *c


	return c;
}