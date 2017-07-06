#include <stdio.h>
#define MAX 100

int main() {
	int m;
    scanf("%d", &m);
    int i, j;
    int a[MAX][MAX];
    for(i = 0; i < m; ++i) {
		for(j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int md = 0;
    for(i = 0; i < m; ++i) {
		int s = 0;
        for(j = 0; j < m - i; ++j) {
            s += a[j][j + i];
        }
        if(s > md) {
            md = s;
        }
    }
    
    printf("%d", md);
    return 0;
}
