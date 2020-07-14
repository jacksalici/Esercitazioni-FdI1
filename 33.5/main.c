#include "tirocini.h"

int main(void) {
	FILE *f = fopen("t.txt", "r");
	struct tirocinio t;
	bool b = tirocinio_load(f, &t);
	 b = tirocinio_load(f, &t);
	 b = tirocinio_load(f, &t);
	 b = tirocinio_load(f, &t);
	 b = tirocinio_load(f, &t);
	 b = tirocinio_load(f, &t);
	 b = tirocinio_load(f, &t);
}