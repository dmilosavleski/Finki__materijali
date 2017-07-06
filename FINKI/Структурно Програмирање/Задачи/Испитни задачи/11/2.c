#include <stdio.h>
#define MAX 100

int main()
{
	int i,j;
	int m;
	int mat[MAX][MAX];
	int zbirG=0;
	int zbirS=0;
	int temp=0;

	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);

			if(i==j)
				zbirG+=mat[i][j];
			else if(i+j==m-1)
				zbirS+=mat[i][j];
		}
	}

	if(zbirS>zbirG)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				
				if(i+j==m-1)
				{
					temp=mat[i][j];
					mat[i][j]=mat[i][i];
					mat[i][i]=temp;
				}
			}
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",mat[i][j]);
		}

		printf("\n");
	}

	return 0;
}