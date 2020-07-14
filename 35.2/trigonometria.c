double pow(double base, double esp) {
	double pow=1;
	for (double i = 0; i < esp; i++) {
		pow = pow * base;
	}
	return pow;
}
double fatt(double x) {
	double fatt=1;
	for (double i = 2; i <= x; i++) {
		fatt*=i;
	}
	return fatt;
}

double seno_iperbolico(double x) {
	double sum0 = 0, sum1 = 0;

	
	for (double i = 0; 1; i++)
	{
		sum0 = sum1;
		sum1 = (1 / fatt(2 * i + 1))*pow(x, 2 * i + 1);
		if (sum0 == sum1)
			return sum1;
	}

}