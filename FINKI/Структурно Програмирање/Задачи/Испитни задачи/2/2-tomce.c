#include <stdio.h>
#define MAX 100

int main() {
	int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    int a[MAX][MAX], b[MAX][MAX];
    for(i = 0; i < m; ++i) {
		for(j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; ++i) {
		for(j = 0; j < n; ++j) {
            int s = 0;
            if(i > 0&&a[i - 1][j] > a[i][j]) s += a[i - 1][j];
            if(i < m - 1&&a[i + 1][j] > a[i][j]) s += a[i + 1][j];
            if(j > 0 && a[i][j - 1] > a[i][j]) s += a[i][j - 1];
            if(j < n - 1 && a[i][j + 1] > a[i][j]) s += a[i][j + 1];
            b[i][j] = s;            
        }
    }
    
    for(i = 0; i < m; ++i) {
		for(j = 0; j < n; ++j) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
