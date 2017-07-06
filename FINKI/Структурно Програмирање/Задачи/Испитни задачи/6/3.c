#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

int funckija(char *p)
{
	char bukva=*p;
	int max=0;
	int broj=1;
	p++;

	while(*p)
	{
		if(*p==bukva)
		{
			broj++;
		}else{
			if(broj>max)
			{
				max=broj;
			}
			broj=1;
			
		}
		bukva=*p;
		p++;
	}
	return max;
}

int main()
{
	FILE *f = fopen("tekst.txt","r");
	char red[MAX];
	char maxRed[MAX];
	int max=0;
	int c=0;
	int indeks=0;

	while(fgets(red,MAX,f)!=NULL)
	{
		int p = funckija(red);
		if(p>max)
		{
			max=p;
			strcpy(maxRed,red);
			indeks=c;
		}

		c++;
	}
	fclose(f);
	printf("%d\n",max);
	printf("%s\n",maxRed);

	return 0;
}