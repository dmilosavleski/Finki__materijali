#include <stdio.h>

int func(int x) {

    if (x < 10) return 0;

    return ((x/10)%10 + func(x/100));
}

int main(){

    int n;

    printf("Vnesi eden priroden broj: ");
    scanf("%d", &n);
    printf("Zbirot na cifrite koi se naogaat na neparni pozicii iznesuva %d.\n", func(n));

    return 0;
}
