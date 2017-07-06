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

float ratio(char *row) {
    int upper = 0;
    int lower = 0;
    while(*row) {
        if(isalpha(*row)) {
            if(isupper(*row)) {
                ++upper;
            } else if(islower(*row)) {
           		++lower;
            }            
        }        
        row++;
    }    
    return 1.0 * upper / lower;
}

int main() {
    wtf();    
    FILE *f = fopen("text.txt", "r");    
    char row[MAX];
    int rowIndex = 0;
    float maxRatio = 0;
    int max = 0;
    while(fgets(row, MAX, f) != NULL) {
 		float r = ratio(row);
        printf("%.2f %s", r, row);
        if(r > maxRatio) {
            maxRatio = r;
            max = rowIndex;
        }
        ++rowIndex;
    }
    fclose(f);
    printf("%d", max);
    return 0;
}