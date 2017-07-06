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

int repeatCount(char *row) {
    int res = 0;
    int c = 1;
    char prev = *row;
    ++row;
    while(*row) {
        if(*row == prev) {
            ++c;
        } else {
            if(c > res) {
                res = c;            
            }
            c = 1;
        }
        prev = *row;
        row++;
    }
    return res;
}

int main() {
    wtf();    
    FILE *f = fopen("text.txt", "r");    
    char row[MAX];
    char maxRow[MAX];
    int total = 0;
    int max = 0;
    while(fgets(row, MAX, f) != NULL) {
 		int r = repeatCount(row);
        if(r > max) {
            max = r;
            strcpy(maxRow, row);
        }
    }
    fclose(f);
    printf("%d\n", max);
    printf("%s\n", maxRow);
    return 0;
}