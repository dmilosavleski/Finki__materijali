#include <stdio.h>

int func(int x)
{
    if (x < 10) return 1;

        else return ((x/10)%10) * func(x/100);
}

int main()
{
    int n;

    printf("Vnesi eden priroden broj: ");
    scanf("%d", &n);
    printf("Proizvodot na cifrite koi se naogaat na parni pozicii iznesuva %d.\n", func(n));
    return 0;
}
