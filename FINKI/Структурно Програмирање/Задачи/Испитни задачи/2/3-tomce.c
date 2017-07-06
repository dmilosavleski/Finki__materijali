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

int samoglaska(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxSoglaski(char *row) {
    int res = 0;
    int soglaski = 0;
    while(*row) {
        if(isalpha(*row)) {
            if(!samoglaska(*row)) {
                ++soglaski;
            } else {
            	if(soglaski > res) {
                    res = soglaski;
                }
                soglaski = 0;
            }
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
 		int r = maxSoglaski(row);
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