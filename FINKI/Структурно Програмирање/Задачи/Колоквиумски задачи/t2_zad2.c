#include <stdio.h>
#define MAX 100

int main(){

    int a[MAX][MAX];
    int m, n, i, j, k, prod1, prod2, pom;
    // k-indeks na simetricnata kolona, prod1 - proizvod na elementite na kolonata, prod2 - proizvod na elementite na simetricnata kolona

    printf("Vnesete broj na redici: "); scanf("%d", &m);
    printf("Vnesete broj na koloni: "); scanf("%d", &n);
    printf("Vnesete gi elementite vo matricata: \n");

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++){
                printf("a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }

    j = 0;
    while(j < n/2){
        prod1 = prod2 = 1;
        k = n - 1 - j;
        for(i = 0; i < m; i++){
            prod1 *= a[i][j];
            prod2 *= a[i][k];
        }
        if(prod1 > prod2){
            for(i = 0; i < m; i++){
                pom = a[i][j];
                a[i][j] = a[i][k];
                a[i][k] = pom;
            }
        }
        j++;
    }

    printf("\nRezultantna matrica: \n");
    for(i = 0; i < m; i++){
        printf("\n");
        for(j = 0; j < n; j++)
           printf("%d\t", a[i][j]);
    }

    return 0;
}





