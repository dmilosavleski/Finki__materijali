#include <stdio.h>

int isPow(int x, int y) {
	if(x <= 1) return x;
    if(x % y != 0) return 0;
    return isPow(x / y, y);
}

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        if(isPow(x, y)) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }        
    }
    return 0;
}

    