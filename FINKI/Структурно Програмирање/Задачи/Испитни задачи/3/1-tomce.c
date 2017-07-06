#include <stdio.h>

int printParni(int n) {
    if(n == 0) return;
    int r = printParni(n / 10);
    int c = n % 10;
    if(c % 2 == 0) {
        printf("%d", c * 2);
        return r + 1;
	}
    return r;
}

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        int r = printParni(x);
        printf(" : %d\n", r);        
    }
    return 0;
}
