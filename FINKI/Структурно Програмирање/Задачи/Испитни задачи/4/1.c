#include <stdio.h>

int count(int a) {
    if(a == 0) return 1;
    return 10 * count(a / 10);
}

int findNum(int a, int b, int c) {
    if(a == 0) return 0;
    if(a % c == b) return 1 + findNum(a / c, b, c);
    return findNum(a / 10, b, c);
}

int main() {
    int N;
    scanf("%d", &N);
    int i;
    for(i = 0; i < N; ++i) {
        int a, b;        
        scanf("%d %d", &a, &b);
        int c = count(b);
        printf("C -> %d\n",c);
        printf("%d\n", findNum(a, b, c));
    }
    return 0;
}
