#include "trova.h"
#include <string.h>

int trova_diverso_dalla_fine(const char *str, char c) {
	
	if (str == NULL)
		return -1;
	
	for (int i = strlen(str)-1; i >= 0; i--)
		if (str[i] != c)
			return i;
	
	return -1;

}