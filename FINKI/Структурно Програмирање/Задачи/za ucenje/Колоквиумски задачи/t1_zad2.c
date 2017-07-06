#include <stdio.h>
#define MAX 100

int main(){

    int a[MAX][MAX];
    int m, n, i, j, k, suma1, suma2, pom;
    // k-indeks na simetricnata redica, suma1 - zbir na elementite na redicata, suma2 - zbir na elementite na simetricnata redica

    printf("Vnesete broj na redici: "); scanf("%d", &m);
    printf("Vnesete broj na koloni: "); scanf("%d", &n);
    printf("Vnesete gi elementite vo matricata: \n");

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++){
                printf("a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }

    i = 0;
    while(i < n/2){
        suma1 = suma2 = 0;
        k = m - 1 - i;
        for(j = 0; j < n; j++){
            suma1 += a[i][j];
            suma2 += a[k][j];
        }
        if(suma1 > suma2){
            for(j = 0; j < n; j++){
                pom = a[i][j];
                a[i][j] = a[k][j];
                a[k][j] = pom;
            }
        }
        i++;
    }

    printf("\nRezultantna matrica: \n");
    for(i = 0; i < m; i++){
        printf("\n");
        for(j = 0; j < n; j++)
           printf("%d\t", a[i][j]);
    }

    return 0;
}
