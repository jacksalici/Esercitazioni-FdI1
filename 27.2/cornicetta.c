#include<stdio.h>
#include<string.h>


void stampa_cornicetta(const char *s) {
	size_t lung = strlen(s);
	if (s == NULL)
		return;
	//1riga
	fputc('+', stdout);
	for (size_t i = 0; i<(lung+6); i++)
		fputc('=', stdout);
	fputc('+', stdout);
	fputc('\n', stdout);
	//2riga
	fputc('|', stdout);
	fputc(' ', stdout);
	fputc('*', stdout);
	for (size_t i = 0; i < (lung + 2); i++)
		fputc('-', stdout);
	fputc('*', stdout);
	fputc(' ', stdout);
	fputc('|', stdout);
	fputc('\n', stdout);
	//3riga
	fputc('|', stdout);
	fputc(' ', stdout);
	fputc('|', stdout);
	fputc(' ', stdout);
	printf("%s", s);
	fputc(' ', stdout);
	fputc('|', stdout);
	fputc(' ', stdout);
	fputc('|', stdout);
	fputc('\n', stdout);
	//4riga
	fputc('|', stdout);
	fputc(' ', stdout);
	fputc('*', stdout);
	for (size_t i = 0; i < (lung + 2); i++)
		fputc('-', stdout);
	fputc('*', stdout);
	fputc(' ', stdout);
	fputc('|', stdout);
	fputc('\n', stdout);
	//5riga
	fputc('+', stdout);
	for (size_t i = 0; i < (lung + 6); i++)
		fputc('=', stdout);
	fputc('+', stdout);
	fputc('\n', stdout);

 }
