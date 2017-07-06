#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

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
       
    FILE *f = fopen("tekst.txt", "r");    
    char row[MAX];
    while(fgets(row, MAX, f) != NULL) {
 		cypher(row);
        printf("%s", row);
    }
    fclose(f);    
    return 0;
}