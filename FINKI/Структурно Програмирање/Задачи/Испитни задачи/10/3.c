#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 80

// ako pocnuva na cifra ili pak ako pocnuva i zavrsuva na cifra ama ne istata

/*
prazen glup red
1na 1ka proba glupa!!! 1na!!

nemozi1 !1proba1 kako 1proba2 ne!
nema nisto tuka!
to e to

pro1ba
*/

char* pecatiZborce(int cifra, char *p)
{
    char *temp=p;

    printf("%c",*p);
    p++;

    while(*p)
    {
        if(isalpha(*p) || isdigit(*p))
            printf("%c",*p);

        if(*p==' ')
        {
            printf(" ");
            return p;  
        }

        p++;
    }

    printf("\n");

    return p;
}

int pecati(char *r) {
    
    int broj=0;
    int first_digit=0;
    int cifra;

    char *temp;

    if(isdigit(*r))
    {
        first_digit=1;
        cifra=*r;
    }

    while(*r) 
    {
        // dali prviot karakter vo zborot e cifra
        if(first_digit)
        {
            char *k = pecatiZborce(cifra,r);
            temp=r;
            r=k;

            if(temp!=k)
                broj++;

            if(*r==' ')
                first_digit=0;

        }else{
            // ako r e prazno mesto ili intekrpukciski a slednoto e brojka
            if((ispunct(*r) || *r==' ') && isdigit(*(r+1)))
            {
                first_digit=1;
                cifra=*(r+1);
            }else
                first_digit=0;    
        }

        r++;
    }

    return broj;
}

int main() {
       
    FILE *f = fopen("tekst.txt", "r");    
    char row[MAX];
    int k=0;
    int broj=0;

    while(fgets(row, MAX, f) != NULL) {

        if(k==0)
            k=1;
        else{
            if(*row=='\n')
                printf("\n");
            else
                broj+=pecati(row);
        }
            
    }

    printf("\n%d",broj);

    fclose(f);    
    return 0;
}