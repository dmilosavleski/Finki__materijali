#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ZBOR 500

void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


void maliBukvi(char *p) {
    while(*p) {
        *p=tolower(*p);

        if(*p=='a') {
            if(*(p-1)==' ')
                *p=toupper(*p);
            else {
                *p=*(p-1);
                *(p-1)='a';
            }
        }else if(*p=='\n'){
            *p=' ';
        }

        p++;
    }
}

int pecatiSekojTret(char *p, int k) {
    
    int vo_zbor=1;
    int broj_zborovi=0;

    if(k!=0)
        broj_zborovi=k;

    while(*p)
    {

        if(*p==' ' && *(p+1)!=' ')
        {
            broj_zborovi++;
            vo_zbor=0;

            if(broj_zborovi==3)
            {
                printf("\n");   
                broj_zborovi=0;
            }
            
        }else{
            vo_zbor=1;                  
        }

        if(vo_zbor)
        {
            if(broj_zborovi==2)
            {
                printf("%c",*p);    
            }
        }

        p++;
    }

   return broj_zborovi;
}



int main() {

    //wtf();

    FILE *f = fopen("tekst.txt", "r");

    char c[ZBOR];

    int k=0;

    while(fgets(c,ZBOR,f)!=NULL) {
        maliBukvi(c);
        k = pecatiSekojTret(c,k);
    }

    fclose(f);
}