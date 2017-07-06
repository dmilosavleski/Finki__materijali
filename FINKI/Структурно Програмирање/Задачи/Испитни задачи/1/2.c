#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int mat[n][m];

	int max=0;
	int k=0;

	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);

			if(mat[i][j]%(i+1)==0 && mat[i][j]%(j+1)==0 && mat[i][j]>max)
			{
				k=1;
				max=mat[i][j];
			}
		}
	}

	if(k==0)
	{
		printf("Nema pogoden broj.\n");
	}else{
		printf("%d\n",max);
	}


	return 0;
}