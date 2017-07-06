#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

float odnosGolemiMali(char *p)
{
	int golemi=0;
	int mali=0;

	while(*p)
	{
		if(isalpha(*p)) {
            if(isupper(*p)) {
                golemi++;
            } else if(islower(*p)) {
           		mali++;
            }            
        }   

        p++;     
	}

	return 1.0 * golemi / mali;
}

int main()
{
	
	FILE *f = fopen("tekst.txt","r");
	char row[MAX];
	char maxRow[MAX];
	int max=0;
	int index=0;

	while(fgets(row,MAX,f)!=NULL)
	{
		float m = odnosGolemiMali(row);

		if(m>max)
		{
			max=index;
			strcpy(maxRow,row);

		}

		printf("%0.2f %s",m,row);
		index++;
	}
	fclose(f);
	printf("\n%d\n",max);

    return 0;
}