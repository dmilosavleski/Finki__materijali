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

void cypher(char *row) {
    int len = strlen(row);
    while(*row) {
        if(isalpha(*row)&&isupper(*row)) {
        	*row = (int)'Z' - ((int)*row + len % 26) % 26;
        }
        ++row;
    }
}

int main() {
    wtf();    
    FILE *f = fopen("text.txt", "r");    
    char row[MAX];
    while(fgets(row, MAX, f) != NULL) {
 		cypher(row);
        printf("%s", row);
    }
    fclose(f);    
    return 0;
}