#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int funkcija(char *p)
{
	int brojBukvi=0;
	int brojCifri=0;
	int voZbor=1;

	if(isalpha(*p))
		brojBukvi++;
	else if(isdigit(*p))
		brojCifri++;

	p++;

	while(*p)
	{
		if(ispunct(*(p)) || *(p)==' ')
		{
			voZbor=0;

			if(brojCifri>=2 && brojBukvi==3)
				return 1;

			brojCifri=0;
			brojBukvi=0;
		}

		if(voZbor)
		{
			if(isalpha(*p))
				brojBukvi++;
			else if(isdigit(*p))
				brojCifri++;
		}

		if(*(p+1)!=' ' && !ispunct(*(p+1)))
			voZbor=1;

		p++;
	}

	return 0;
}

int main()
{
	FILE *f = fopen("tekst.txt","r");
	FILE *f1 = fopen("rez.txt","w");

	char niza[100];

	while(fgets(niza,MAX,f)!=NULL)
	{
		int k = funkcija(niza);

		if(k)
			fprintf(f1,"%s",niza);
	}

	fclose(f);
	fclose(f1);

	return 0;
}