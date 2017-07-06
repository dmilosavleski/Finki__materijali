#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

int najgoremZbor(char *red)
{
	int l=0;
	int max=0;

	while(*red)
	{
		if(*red!=' ' && *red!='\n')
			l++;
		else{
			if(l>max)
			{
				max=l;
			}
			l=0;
		}
		red++;
	}
	return max;
}

int main()
{
	
	FILE *f = fopen("tekst.txt", "r"); 
	char row[MAX];
	char maxRow[MAX];
	int max=0;

	while(fgets(row,MAX,f) != NULL)
	{
		int broj = najgoremZbor(row);
		if(broj>max)
		{
			max=broj;
			strcpy(maxRow,row);
		}
	}

	fclose(f);
    printf("%d\n", max);
    printf("%s\n", maxRow);

    return 0;
}