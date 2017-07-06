#include <stdio.h>

int print4(int n) {
   if(n==0) return 0;

   int r = print4(n/10);

   int c = n % 10;

   if(c%2==0)
   {
   	printf("%d",2*c);
   	return r+1;
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
        int r = print4(x);
        printf(" : %d\n", r);        
    }
    return 0;
}