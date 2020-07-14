#define _CRT_SECURE_NO_WARNINGS
#ifndef TIROCINI_H
#define TIROCINI_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


struct tirocinio {
	char *nome;
	char *azienda1;
	char *azienda2;
	char *azienda3;
};

extern bool tirocinio_load(FILE *f, struct tirocinio *t);


#endif // TIROCINI_H
