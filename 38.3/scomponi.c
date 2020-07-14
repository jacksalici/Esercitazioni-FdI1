void stampa_scomposizione(unsigned int n) {
	unsigned int i = 2;
	if (n == 1)
		printf("1");
	else if (n == 0)
		printf("0");
	else
		while (n>1) {

			if ((n%i==0)&&(i != 2)) {
				printf(" * ");
			}
			
			unsigned int v = 0;
			
			while (n%i == 0) {
				v++;
				n /= i;
			}

			if (v == 1)
				printf("%d", i);
			else if (v>1)
				printf("%d^%d", i, v);
		
			i++;
		}
}