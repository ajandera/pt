#include <stdio.h>
#include <string.h>

int main(){
    char s[100],retazec[100];
    char znak;
    int cislo;
    int pocet=0;
    int j=0;
    FILE *f;


    printf("Zadaj retazec=");
    scanf("%s",s);
    getchar();
    f=fopen("subor.txt","r");
    fscanf(f,"%c",&znak);
    fscanf(f,"%d",&cislo);
    fclose(f);

    for (int i =0;i<strlen(s);i++)
    {
        if ((s[i] == znak) & (cislo > pocet)) {

            pocet++;
        }
        else
        {
            retazec[j]=s[i];
            j++;

        }
    }
    retazec[j] = '\0';
    printf("Vymeneny retazec=%s\n",retazec);
    printf("pocet vymazanych znakov je=%d\n",pocet);

    return 1;

}
