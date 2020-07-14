#define _CRT_SECURE_NO_WARNINGS
#ifndef PERSONA_H
#define PERSONA_H

#include <stdio.h>
#include <string.h>

struct persona {
	int anni;
	char nome[50];
};

extern struct persona *leggi_persone(const char *filename, size_t *size);

#endif // !PERSONA_H
