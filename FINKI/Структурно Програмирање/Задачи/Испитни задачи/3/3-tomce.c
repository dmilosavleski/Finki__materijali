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

int maxZbor(char *row) {
    int res = 0;
    int l = 0;
    while(*row) {
        if(*row != ' '&&*row != '\n') {
            ++l;
        } else {
            if(l > res) {
                res = l;
            }
            l = 0;
        }
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
 		int r = maxZbor(row);
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