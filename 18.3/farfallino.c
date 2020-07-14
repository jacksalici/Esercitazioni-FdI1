#include <string.h>
#include <stdlib.h>


char *farfallino_encode(const char *s) {
	size_t numero_vocali = 0;
	if (s == NULL) {
		return NULL;
	}
	
	
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			numero_vocali++;
	}
	char *new = malloc((strlen(s) + 2 * numero_vocali + 1) * sizeof(char));
	size_t j = 0;
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			new[j] = s[i];
			j++;
			new[j] = 'f';
			j++;
			new[j] = s[i];
			j++;
		}
		else {
			new[j] = s[i];
			j++;
		}
	}
	new[j] = 0;
	return new;
}