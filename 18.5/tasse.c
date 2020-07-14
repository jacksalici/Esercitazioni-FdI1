#include <stdint.h>

unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni, unsigned int *aliquote, size_t n) {
	unsigned int irpef1 = stipendio, irpef0 = 0;
	
	if (stipendio > scaglioni[n - 1])
		return irpef1 * aliquote[n - 1] / 100;

	size_t i;
	for (i = 0; i < n-1; i++) {
		if (stipendio <= scaglioni[i+1]) {
			irpef1 = irpef0 + (double)(((double)((double)aliquote[i])/100) * irpef1);
			return irpef1;
		}
		else {
			irpef0 = irpef0 + ((aliquote[i]/100) * scaglioni[i]);
			irpef1 -= scaglioni[i];
		}
	}
}