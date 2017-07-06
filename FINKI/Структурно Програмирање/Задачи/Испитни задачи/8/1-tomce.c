#include <stdio.h>

int fib(int a, int b, int n) {
    if(n == a) return 1;
    if(n < a) return 0;
    return fib(b, a + b, n);
}

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if(fib(1, 1, x)) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }        
    }
    return 0;
}
