#include <stdio.h>
#define MAX 10

int main()
{
	int m,n;
	int i,j;

	int max=0;
	int min=0;

	int k=1;
	int index=0;

	int matrica[MAX][MAX];

	scanf("%d %d",&m,&n);

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrica[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		max=0;

		for(j=0;j<n;i++)
		{
			if(matrica[j][i]>max)
				max=matrica[j][i];
		}

		if(k)
		{
			min=max;
			k=0;
		}

		if(max<min)
		{
			min=max;
			index=i;
		}
	}

	k=1;

	for(i=0;i<m;i++)
	{
		if(k)	
		{
			printf("%d",matrica[i][index]);
			k=0;
		}else{
			printf(" %d",matrica[i][index]);
		}
	}
		
	return 0;

}