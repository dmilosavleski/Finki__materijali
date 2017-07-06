#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int vozbor=0, vkupno=0,cifri=0,bukvi=0,i;
    char red[101];
    FILE *dat,*rez;
    if((dat = fopen("zadaca3.txt","r")) == NULL)
    {
        printf("Ne mozam da ja otvoram datotekata.");
        return -1;
    }
    if((rez = fopen("rezultat.txt","w")) == NULL)
    {
        printf("Ne mozam da ja otvoram datotekata.");
        return -1;
    }
    while(fgets(red,100,dat)!=NULL)
    {
        vkupno=0;
        for(i=0;i<strlen(red);i++)
        {
            if(isalnum(red[i]))
            {
                if(vozbor==0)
                {
                    vozbor = 1;
                    cifri=bukvi=0;
                }
                if(isdigit(red[i]))
                {
                    cifri++;
                }
                else
                {
                    bukvi++;
                }
            }
            else
            {
                if(vozbor==1)
                {
                    vozbor = 0;
                    if(cifri>=2 && bukvi>=3)
                        vkupno++;
                }
            }
        }
        if(vkupno>0)
            fprintf(rez,"%s",red);
    }
    fclose(dat);
    fclose(rez);
}
