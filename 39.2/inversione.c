#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

bool inverti_case(const char* nomefilein, const char* nomefileout) {
	FILE *in = fopen(nomefilein, "r");
	FILE *out = fopen(nomefileout, "w");
	if ((in == NULL) || (out == NULL))
	{
		fclose(in);
		fclose(out);
		return false;
	}

	int c;
	while ((c = fgetc(in))!=EOF) {
		

		if (isalpha(c)) {
			if (isupper(c))
				fputc(tolower(c), out);
			else if (islower(c))
				fputc(toupper(c), out);
		}
		else
			fputc(c, out);
	}





	fclose(in);
	fclose(out);
	return true;



}