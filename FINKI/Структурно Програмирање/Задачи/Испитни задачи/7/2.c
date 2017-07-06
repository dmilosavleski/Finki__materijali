#include <stdio.h>

int main()
{
	int n;
	int mat[100][100];
	scanf("%d",&n);

	int i,j;
	int zbir=0;
	int min=0;
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
		int zbir = 0;
        for(j = i; j < n; ++j) {
            s += a[j][n - 1 - (j - i)];
        }
        if(i == 0) min = s;
        if(zbir < min) {
            min = zbir;
        }
    }
    */

	for(i=0;i<n;i++)
	{
		zbir=0;
		for(j=n-1,k=i;j>=0;j--,k++)
		{
			zbir+=mat[k][j];
			//printf("%d %d", k, j);
		}	
		//printf("\n");

		if(i==0)
		{
			min=zbir;		
		}else{
			if(zbir<min)
			{
				min=zbir;
			}
		}
	}

	printf("%d\n",min);

	return 0;
}