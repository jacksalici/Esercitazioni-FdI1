#include "stringhe.h"
#include <stdlib.h>
char ispair(size_t n) {
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

char *center(const char *str, size_t n, char c) {
	if (str == NULL) {
		return NULL;
	}
	if (strlen(str) >= n) {
		char *new = malloc((strlen(str)+1) * sizeof(char));
		strcpy(new, str);
		return new;
		free(new);
	}

	char *new = malloc((n+1) * sizeof(char));
	size_t i, lung = strlen(str);

	if (ispair(lung) == ispair(n)) {
		for (i = 0; i < (n - lung) / 2; i++)
			new[i] = c;
		for (size_t j = 0; j < lung; j++, i++)
			new[i] = str[j];
		for (size_t j = 0; j < (n - lung) / 2; j++, i++)
			new[i] = c;
		new[i] = 0;
	}
	if (!ispair(lung) && ispair(n)) {
		for (i = 0; i < (n - lung) / 2; i++)
			new[i] = c;
		for (size_t j = 0; j < lung; j++, i++)
			new[i] = str[j];
		for (size_t j = 0; j < (((n - 1) - lung) / 2) + 1; j++, i++)
			new[i] = c;
		new[i] = 0;
	}
	if (ispair(lung) && !ispair(n)) {
		for (i = 0; i < (((n - 1) - lung) / 2) + 1; i++)
			new[i] = c;
		for (size_t j = 0; j < lung; j++, i++)
			new[i] = str[j];
		for (size_t j = 0; j < (n - lung) / 2; j++, i++)
			new[i] = c;
		new[i] = 0;
	}


	return new;
	free(new);
}
