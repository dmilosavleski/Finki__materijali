#include <stdio.h>

int suma_parni(int a)
{
    if(a==0)
        return 0;
    if((a%10)%2!=0)
        return suma_parni(a/100);
    return a%10+suma_parni(a/100);
}

int main() {
    int broj;
    scanf("%d", &broj);
    printf("%d",suma_parni(broj/10));
    return 0;
}
