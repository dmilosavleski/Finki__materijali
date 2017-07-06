#include <stdio.h>
#define MAX 100

int main() {
	int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    int a[MAX][MAX], max[MAX][MAX];
    for(i = 0; i < m; ++i) {
		for(j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxX = 0;
    int maxY = 0;
    int ms = 0;
    for(i = 0; i < n - 1; ++i) {
		for(j = 0; j < m - 1; ++j) {
            int s = a[i][j];
            s += a[i + 1][j + 1];
            if(s > ms) {
                ms = s;
                maxX = a[i][j];
                maxY = a[i + 1][j + 1];
            }
        }
    }
    for(i = 0; i < n - 1; ++i) {
		for(j = 1; j < m; ++j) {
            int s = a[i][j];
            s += a[i + 1][j - 1];
            if(s > ms) {
                ms = s;
                maxX = a[i][j];
                maxY = a[i + 1][j - 1];
            }
        }
    }
    printf("%d %d", maxX, maxY);
    return 0;
}
