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
    int ms = 0;
    for(i = 0; i < m - 1; ++i) {
		for(j = 0; j < n - 1; ++j) {
            int cm[2][2];
            int s = 0;
            s += a[i][j];
            s += a[i][j + 1];
            s += a[i + 1][j];
            s += a[i + 1][j + 1];
            if(s > ms) {
                ms = s;
                max[0][0] = a[i][j];
                max[0][1] = a[i][j + 1];
                max[1][0] = a[i + 1][j];
                max[1][1] = a[i + 1][j + 1];
            }
                
        }
    }
    
    for(i = 0; i < 2; ++i) {
		for(j = 0; j < 2; ++j) {
            printf("%d ", max[i][j]);
        }
        printf("\n");
    }
    return 0;
}
