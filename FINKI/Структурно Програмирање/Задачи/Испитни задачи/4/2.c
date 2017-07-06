#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int mat[n][m];
	
	int mat1[2][2];
	int max=0;
	int zbir=0;

	int i,j;

	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}

	for(i=0;i<n-1;i++)
	{
		
		for(j=0;j<m-1;j++)
		{
			zbir=0;

			zbir+=mat[i][j];
			zbir+=mat[i][j+1];
			zbir+=mat[i+1][j];
			zbir+=mat[i+1][j+1];

			if(zbir>max)
			{
				max=zbir;
				mat1[0][0]=mat[i][j];
				mat1[0][1]=mat[i][j+1];
				mat1[1][0]=mat[i+1][j];
				mat1[1][1]=mat[i+1][j+1];
			}
		}
	}


	printf("%d %d\n",mat1[0][0],mat1[0][1]);
	printf("%d %d",mat1[1][0],mat1[1][1]);

	return 0;
}