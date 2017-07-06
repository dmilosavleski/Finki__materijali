#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int samoglaska(char c)  {

    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

}

int main(){

    FILE *ptr1, *ptr2;

    char red[MAX], *c, red_max[MAX], *pok_red, *pok_max = red_max;

    int broj_samoglaski = 0, broj_zbor_red = 0, max_zbor_red = 0, vo_zbor = 0;
    /* broj_zbor_red - broj na zborovi so neparen broj samoglaski vo momentalniot red;
    max_zbor_red - broj na zborovi vo redot so najgolem broj zborovi so neparen broj samoglaski*/
    if((ptr1 = fopen("zadaca3.txt", "r")) == NULL)
        {
            printf("Datotekata ne moze da se otvori za citanje.");
            return -1;
        }

    if((ptr2 = fopen("rezultat.txt", "w")) == NULL)
        {
            printf("Datotekata ne moze da se otvori za zapisuvanje.");
            return -1;
        }

    while((fgets(red, MAX, ptr1)) != NULL)
        {
            c = red;
            pok_red = red;
            pok_max = red_max;
            broj_zbor_red = 0;
            while(*c != '\0')
                {
                    if(isalpha(*c))
                        {
                            if(!vo_zbor) vo_zbor = 1; // ako e na pocetok na zbor

                            if(samoglaska(*c)) broj_samoglaski++; // ako e vo sredina na zbor
                        }
                    else if(vo_zbor) // ako e na kraj na zbor
                        {
                            vo_zbor = 0;
                            if(broj_samoglaski % 2) // ako ima neparen broj na samoglaski vo zborot, brojot na takvi zborovi vo redot se zgolemuva
                                {
                                    broj_zbor_red++;
                                    if(broj_zbor_red > max_zbor_red) // ako vo momentalniot red ima najmnogu zborovi so neparen broj samoglaski, toj ke se zacuva vo nizata red_max
                                        {
                                            max_zbor_red = broj_zbor_red;
                                            while(*pok_max++ = *pok_red++);
                                            *(pok_max) = '\0';
                                        }
                                }
                            broj_samoglaski = 0;
                        }
                    c++;
                }
        }

    fputs(red_max, ptr2);
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
