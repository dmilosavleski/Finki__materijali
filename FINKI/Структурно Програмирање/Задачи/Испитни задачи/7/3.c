#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

int broj(char *p)
{
	int b=0;

	while(*p)
	{
		if(islower(*p))
			b+=(int)*p;

		p++;
	}
	return b;

}

int main()
{
	FILE *f = fopen("tekst.txt","r");
	char red[MAX];
	char maxRed[MAX];
	int max=0;

	while(fgets(red,MAX,f)!=NULL)
	{
		int p = broj(red);
		if(p>max)
		{
			max=p;
			strcpy(maxRed,red);
		}
	}

	printf("%d\n%s\n",max,maxRed);

	return 0;
}