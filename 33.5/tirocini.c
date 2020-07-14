#define _CRT_SECURE_NO_WARNINGS
#include"tirocini.h"

bool tirocinio_load(FILE *f, struct tirocinio *t) {

	size_t l1=0, l2=0, l3=0, l4=0;
	char c;
	int p = ftell(f);


	while ((c = fgetc(f)) != ',') {
		if (c == EOF)
			return false;
		l1++;
	}
	//l1++;
	//c = fgetc(f);
	t->nome = malloc((l1+1) * sizeof(char));
	
	while ((c = fgetc(f)) != ',') {
		if (c == EOF)
			return false;
		l2++;
	}
	//l2++;
	//c = fgetc(f);
	t->azienda1 = malloc((l2+1) * sizeof(char));
	
	while ((c = fgetc(f)) != ',') {
		if (c == EOF)
			return false;
		l3++;
	}
	//l3++;
	//c = fgetc(f);
	t->azienda2 = malloc((l3+1) * sizeof(char));

	while ((c = fgetc(f)) != '\n') {
		if (c == EOF)
			return false;
		l4++;
	}
	//l4++;
	//c = fgetc(f);
	t->azienda3 = malloc((l4+1) * sizeof(char));

	fseek(f, 0, p);
	//fscanf(f,"%s,%s,%s,%s\n", t->nome, t->azienda1, t->azienda2, t->azienda3);
	fgets(t->nome, l1+1, f);
	fgetc(f);
	fgets(t->azienda1, l2+1, f);
	fgetc(f);
	fgets(t->azienda2, l3+1, f);
	fgetc(f);
	fgets(t->azienda3, l4+1, f);
	fgetc(f);
	/*t->nome[l1] = 0;
	t->azienda1[l2-1] = 0;
	t->azienda2[l3-1] = 0;
	t->azienda3[l4-1] = 0;*/
	return true;
}