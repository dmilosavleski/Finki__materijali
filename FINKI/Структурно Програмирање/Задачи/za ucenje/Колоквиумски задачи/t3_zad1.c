#include <stdio.h>

int suma_neparni(int a)
{
    if(a==0)
        return 0;
    return a%10+10*suma_neparni(a/100);
}

int main() {
    int broj;
    scanf("%d", &broj);
    printf("%d",suma_neparni(broj/10));
    return 0;
}
