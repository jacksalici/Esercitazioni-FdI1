#include "palindroma.h"
#include <string.h>

bool palindroma(const char *str) {
	if (str == NULL)
		return false;
	if ((strlen(str))==1)
		return true;
	if ((strlen(str)) == 0)
		return false;
	
	for (int i = 0; i < (strlen(str)) / 2; i++) {
		if (str[i] != str[strlen(str) - 1 - i])
			return false;
	}

	return true;
}