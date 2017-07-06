#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

float odnos(char *p)
{
	int prazni=0;
	int bukvi=0;

	while(*p)
	{
		if(*p==' ')
			prazni++;
		else
			bukvi++;

		p++;
	}

	return 1.0 * prazni / bukvi;
}

int main()
{
	FILE *f = fopen("tekst.txt","r");
	char red[MAX];
	char minRed[MAX];
	int c=0;
	float min=0;
	int index = 0;
	int a=0;

	while(fgets(red,MAX,f)!=NULL)
	{
		float k = odnos(red);

		if(c==0)
		{
			index=a;
			min=k;
			c=1;
		}

		if(k>min)
		{
			index=a;
			min=k;
			strcpy(minRed,red);
		}

		printf("%0.2f %s",k,red);
		a++;
	}
	fclose(f);
	printf("\n%d\n",index);

	return 0;
}