#include <stdbool.h>
#include <string.h>

extern bool is_date(const char *s);


int main(void) {

	char s[] = "10/07/2000";

	bool r = is_date(s);

	return 0;
}