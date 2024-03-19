#include <stdio.h>

//deklaracia noveho typu
typedef struct{
   char meno[20];       //prva polozka struktury
   char priezvisko[50]; //druha polozka struktury
   int vek;             //tretia polozka struktury
   char bydlisko[30];   //stvrta polozka struktury
}STUDENT;//nazov noveho typu

void clear (void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}


main(){
   FILE *f; //subor na zapis studentov
   STUDENT s; //jeden student
   char c='a';//pomocna premenna na pridavanie dalsich zaznamov, na zaciatku =a
   char input[50];
   f=fopen("Zoznam.txt","a+"); //otvorenie suboru na pridavanie
   
   while(c=='a'){//pokial v c je a (ano), pridavame studenta
      //nacitanie mena jedneho studenta
      printf("Zadaj meno=");
       fgets(input, sizeof(s.meno), stdin);
       sscanf(input, "%s", &s.meno);
       clear();

      //nacitanie priezviska jedneho studenta
      printf("Zadaj priezvisko=");
       fgets(input, sizeof(s.priezvisko), stdin);
       sscanf(input, "%s", &s.priezvisko);
       clear();


       //nacitanie veku studenta
      printf("Zadaj vek=");
       while (scanf("%d", &s.vek)!=1)
       {
           printf("Zadaj vek=");
           clear();
       }
       clear();
        
      //nacitanie bydliska studenta     
      printf("Zadaj bydlisko=");
       fgets(input, sizeof(s.bydlisko), stdin);
       sscanf(input, "%s", &s.bydlisko);
       clear();

      //zapis udajov 1 studenta do suboru
      fprintf(f,"%s %s %d %s\n",s.meno,s.priezvisko,s.vek,s.bydlisko);
   
      printf("Dalsi zaznam?(a/n)\n");
      scanf("%c",&c);//nacitanie ci chceme pridat dalsieho studenta po nacitani
      clear();
   }
   
   fclose(f);//zatvorenie suboru

}