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
        for(j = 0; j < n - i; ++j) {
            zbir += mat[j + i][j];
        }
        if(i == 0) {
            min = zbir;
        }
        if(zbir < min) {
            min = zbir;
        }
    }
    */

	for(i=0;i<n;i++)
	{
		zbir=0;
		for(j=i,k=0;j<n;j++,k++)
		{
			zbir+=mat[j][k];
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