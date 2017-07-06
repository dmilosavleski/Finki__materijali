//(int)'a' + (ASCI na malata + dolzina na redot % 26) %26
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

void kriptiraj(char *p)
{
	int len = strlen(p);
	while(*p)
	{
		if(isalpha(*p) && islower(*p))
			*p = (int)'a' + ((int)*p + len % 26) % 26;
		p++;
	}
}

int main()
{
	FILE *f = fopen("tekst.txt","r");
	char row[MAX];

	while(fgets(row,MAX,f)!=NULL)
	{
		kriptiraj(row);
		printf("%s",row);
	}
	fclose(f);
	return 0;
}