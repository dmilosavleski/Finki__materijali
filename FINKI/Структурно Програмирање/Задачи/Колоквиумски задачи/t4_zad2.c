#include <stdio.h>


int main() {
    int mat[100][100], n,i,j, sumag=0,sumas=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            if(i==j)
             sumag+=mat[i][j];
            if((i+j)==(n-1))
             sumas+=mat[i][j];
        }
    }
    printf("\n");
    printf("%d %d\n",sumag,sumas);
    if(sumag<sumas)
    {

        for(i=0;i<n;i++)
        {
            int swap = mat[i][i];
            mat[i][i] = mat[i][n-1-i];
            mat[i][n-1-i] = swap;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
