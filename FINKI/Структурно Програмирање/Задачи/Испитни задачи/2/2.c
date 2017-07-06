#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int mat[n][m];
	int mat1[n][m];

	int zbir=0;

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
			
			zbir=0;

			// goren sosed
			if(i-1>=0 && mat[i-1][j]>mat[i][j])
				zbir+=mat[i-1][j];

			// dolen sosed
			if(i+1<n && mat[i+1][j]>mat[i][j])
				zbir+=mat[i+1][j];

			// lev sosed
			if(j-1>=0 && mat[i][j-1]>mat[i][j])
				zbir+=mat[i][j-1];

			// desen sosed
			if(j+1<m && mat[i][j+1]>mat[i][j])
				zbir+=mat[i][j+1];

			mat1[i][j]=zbir;
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