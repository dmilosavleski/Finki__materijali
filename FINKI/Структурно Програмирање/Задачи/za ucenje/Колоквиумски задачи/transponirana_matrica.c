#include <stdio.h>
#define MAX 100

int main()
{
int a[MAX][MAX],i,j,n,m;
printf("Redici na matricata: \n"); scanf("%d",&n);
printf("Koloni na matricata: \n"); scanf("%d",&m);
printf("Vnesuvaj gi elementite: \n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("a[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("Ja vnesovte matricata\n");
for(i=0;i<n;i++)
{
    printf("\n");
    for(j=0;j<m;j++)
    {
        printf("%d\t",a[i][j]);
    }
}
printf("\nTransponirana\n");
for(i=0;i<n;i++)
{
    printf("\n");
    for(j=0;j<m;j++)
    {
        printf("%d\t",a[j][i]);
    }
}

return 0;
}
