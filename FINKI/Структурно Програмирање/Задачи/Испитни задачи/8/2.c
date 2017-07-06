#include <stdio.h>

int main()
{
	int n;
	int mat[100][100];
	scanf("%d",&n);

	int i,j;
	int zbir=0;
	int max=0;
	int k=0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}

	/* tomce resenie
	for(i = 0; i < n; ++i) {
		int max = 0;
        for(j = 0; j < n - i; ++j) {
            zbir += mat[j][n - 1 - (j + i)];
        }
        if(zbir > max) {
            max = zbir;
        }
    }
    */

	for(i=0;i<n;i++)
	{
		zbir=0;
		for(j=n-1-i,k=i;j>=0;j--,k++)
		{
			zbir+=mat[k][j];
			//printf("%d %d", k, j);
		}	
		//printf("\n");

		if(zbir>max)
		{
			max=zbir;
		}
	}

	printf("%d\n",max);

	return 0;
}