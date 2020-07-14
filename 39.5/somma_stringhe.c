#include <stdlib.h>
int contacifre(long long n) {
	int i=0;
	while (n != 0) {
		n /= 10;
		i++;
	}
	return i;
}

char *somma_stringhe(const char *a, const char *b) {
	
	if ((a == NULL) || (b == NULL))
		return NULL;

	long long na = atoll(a);
	long long nb = atoll(b);

	long long nc = na + nb;

	int cifre = contacifre(nc);

	char *c = malloc((cifre+1) * sizeof(char));
	char r;
	int i;
	for (i = cifre-1; i >= 0; i--) {
		r = nc % 10;
		c[i] = (char)r;
		nc /= 10;
	}
	c[cifre] = 0;


	return c;
}