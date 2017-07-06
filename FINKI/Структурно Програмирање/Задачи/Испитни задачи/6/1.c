#include <stdio.h>

int max(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    }
    if(a < b) {
		return max(b, a, c);
    }
    if(a < c) {
        return max(c, b, a);
    }
}

int main() {
	int N;
    scanf("%d", &N);
    int i;
    for(i = 0; i < N; ++i) {
		int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", max(a, b, c));
    }
    return 0;
}
