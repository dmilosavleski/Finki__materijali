#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int mat[n][m];
	int mat1[n][m];

	int pro=0;

	int i,j;

	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);

		}
	}

	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			
			pro=1;

			// goren levo
			if(i-1>=0 && j-1>=0 && mat[i-1][j-1]<mat[i][j])
				pro*=mat[i-1][j-1];

			// gore desno
			if(i-1>=0 && j+1<m && mat[i-1][j+1]<mat[i][j])
				pro*=mat[i-1][j+1];

			// dolu levo
			if(i+1<n && j-1>=0 && mat[i+1][j-1]<mat[i][j])
				pro*=mat[i+1][j-1];

			// dolu desno
			if(i+1<n && j+1<m && mat[i+1][j+1]<mat[i][j])
				pro*=mat[i+1][j+1];

			mat1[i][j]=pro;
		}
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ", mat1[i][j]);
		}

		printf("\n");
	}


	return 0;
}