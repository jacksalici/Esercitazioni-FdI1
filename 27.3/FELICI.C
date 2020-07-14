#define ever (;;)

unsigned int sum_cifre_quad(unsigned int num) {
	unsigned int sum = 0, r;
	while(num != 0) {
		r = num % 10;
		num /= 10;
		sum += (r*r);
	}
	return sum;
}

int felice(unsigned int num) {
	if (num == 0)
		return 0;


	for ever{
		num = sum_cifre_quad(num);
	if (num = 1)
		return 1;
	if (num = 4)
		return 0;
	}

}
