#define _CTR_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>


void cornice(uint8_t h, uint8_t w) {
	
	uint8_t i, j;
	if (w != 0) {
		printf("/-\\");
		for (i = 1; i < w; i++)
			printf("|/-\\");
		printf("\n");
	}
	else if ((w == 0)&&(h!=0)) {
		printf("/\\\n");
	}

	if (h > 1) {
		printf("|");
		for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
			printf(" ");
		}
		printf("|\n");
		printf("\\");
		for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
			printf(" ");
		}
		printf("/\n");
		for (i = 1; i < h - 1; i++) {
			printf("-");
			for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
				printf(" ");
			}
			printf("-\n");
			printf("/");
			for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
				printf(" ");
			}
			printf("\\\n");
			printf("|");
			for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
				printf(" ");
			}
			printf("|\n");
			printf("\\");
			for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
				printf(" ");
			}
			printf("/\n");
		}
		printf("-");
		for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
			printf(" ");
		}
		printf("-\n");
		printf("/");
		for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
			printf(" ");
		}
		printf("\\\n");
		printf("|");
		for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
			printf(" ");
		}
		printf("|\n");
	}
	 
	else if (h = 1) {
		printf("|");
		for (j = 0; j < ((3 * w) + (w - 1) - 2); j++) {
			printf(" ");
		}
		printf("|\n");
		}


	if (w != 0) {
		printf("\\-/");
		for (i = 1; i < w; i++)
			printf("|\\-/");
	}
	else if ((w == 0) && (h != 0)) {
		printf("\\/\n");
	}
}