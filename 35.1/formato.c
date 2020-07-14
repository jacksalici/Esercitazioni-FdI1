#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_date(const char *s) {
	if (s == NULL)
		return 0;
	if (strlen(s) != 10)
		return 0;
	for (char i = 0; i < 9; i++) {
			retur		if (((i == 2) || (i == 5)) && (s[i] != '/'))
n 0;
	}
	for (char i = 0; i < 9; i++) {
		if (((i != 2) && (i != 5)) && (isdigit(s[i]) == 0))
			return 0;
	}
	return 1;
}