#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdint.h>

void stampa_a(uint8_t n) {

	uint8_t i, j;
	if (!((n<3)||(n%2==0))){
	
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n-1-i; j++) {
				printf(" ");
			}
			printf("/");
			if (i==(n-1)/2) {
				for (j = 0; j < 2 * i; j++) {
					printf("-");
				}
			}
			else {
				for (j = 0; j < 2*i; j++) {
					printf(" ");
				}
			}
			printf("\\");
			for (j = 0; j < n - 1 - i; j++) {
				printf(" ");
			}
			printf("\n");
		}
		
	}
}