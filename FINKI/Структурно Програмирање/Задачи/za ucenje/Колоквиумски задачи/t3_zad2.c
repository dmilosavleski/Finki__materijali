#include <stdio.h>


int main() {
    int mat[100][100], n,i,j, sumanad=0,sumapod=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            if((i+j)<n)
             sumanad+=mat[i][j];
            else if((i+j)>n)
              sumapod+=mat[i][j];
        }
    }
    printf("\n");
    printf("%d %d\n",sumanad,sumapod);
    if(sumanad>sumapod)
    {

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i+j)<n)
                {
                    int sind = n-1-i-j;
                    int swap = mat[i][j];
                    mat[i][j]=mat[i+sind][j+sind];
                    mat[i+sind][j+sind] = swap;
                }
            }
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
