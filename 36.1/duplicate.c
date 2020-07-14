#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdbool.h>


bool cifre_duplicate_oct(unsigned int n) {
	char num[50], i=0;

	sprintf(num, "%o", n);

	while (num[i] != 0) {
		for (char j = i+1; j < strlen(num); j++) {
			if (num[j] == num[i])
				return true;
		}
		i++;
	}


	return false;
}