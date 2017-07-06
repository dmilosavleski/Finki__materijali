#include <stdio.h>

int findDigit(int a, int b) {
    if(a == 0) return 0;
    if(a % 10 == b) return 1 + findDigit(a / 10, b);
    return findDigit(a / 10, b);
}

int main() {
    int N;
    scanf("%d", &N);
    int i;
    for(i = 0; i < N; ++i) {
        int a, b;        
        scanf("%d %d", &a, &b);
        int s = 0;
        while(b > 0){
            s += findDigit(a, b % 10);
            b /= 10;
        }
        printf("%d\n", s);
    }
    return 0;
}
