
#define _CRT_SECURE_NO_WARNINGS
#ifndef RAPPORTI_H
#define RAPPORTI_H
#include <stdint.h>

struct rapporto {
	uint16_t id;
	char tipo;
	float valore;
};
extern struct rapporto *leggi_rapporti(const char *filename, uint16_t *n);
#endif // !RAPPORTI_H
