#include <stdio.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int comp(char *row) {
    int res = 0;
    while(*row) {
        if(isalpha(*row)&&islower(*row)) {
            res += (int)*row;
        }
        ++row;
    }
    return res;
}

int main() {
    wtf(); 
    char row[MAX];
    int maxC = 0;
    char maxRow[MAX];
    FILE *f = fopen("text.txt", "r");        
    while(fgets(row, MAX, f) != NULL) {
 		int c = comp(row);
        if(c > maxC) {
			maxC = c;
            strcpy(maxRow, row);
        }
    }    
    fclose(f);
    printf("%d\n%s", maxC, maxRow);
    return 0;
}