#include <math.h>

 double entropia(const double *v, size_t n) {
	 if (v == NULL)
	 {
		 return 0;
	 }
	 if (n==0)
	 {
		 return 0;
	 }
	 
	 double sum = 0.0;

	 for (size_t i = 0; i < n; i++) {
		 if (v[i] == 0)
			 continue;
		 sum += (v[i] * log2(v[i]));
	 }



	 return -sum;
}