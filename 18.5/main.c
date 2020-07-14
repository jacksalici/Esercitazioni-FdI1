#include <stdlib.h>
extern unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni, unsigned int *aliquote, size_t n);


int main(void) {
	unsigned int scaglioni[5] = { 0, 15000, 28000, 55000, 75000 };
	unsigned int aliquote[5] = { 23, 27, 38, 41, 43 };
	unsigned int irpf = irpef(12500, scaglioni, aliquote, 5);

}