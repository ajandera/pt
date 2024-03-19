#include <stdio.h>

//deklaracia noveho typu
typedef struct{
   char meno[20];       //prva polozka struktury
   char priezvisko[50]; //druha polozka struktury
   int vek;             //tretia polozka struktury
   char bydlisko[30];   //stvrta polozka struktury
}STUDENT;//nazov noveho typu

main(){
   FILE *f; //subor na zapis studentov
   STUDENT s; //jeden student
   char c='a';//pomocna premenna na pridavanie dalsich zaznamov, na zaciatku =a
      
   f=fopen("Zoznam.txt","a+"); //otvorenie suboru na pridavanie
   
   while(c=='a'){//pokial v c je a (ano), pridavame studenta
      //nacitanie mena jedneho studenta
      printf("Zadaj meno="); 
      scanf("%s", s.meno);
      getchar();
   
      //nacitanie priezviska jedneho studenta
      printf("Zadaj priezvisko=");
      scanf("%s", s.priezvisko);
      getchar();
   
      //nacitanie veku studenta      
      printf("Zadaj vek=");
      scanf("%d", &s.vek);
      getchar();
        
      //nacitanie bydliska studenta     
      printf("Zadaj bydlisko=");
      scanf("%s", s.bydlisko);
      getchar();
   
      //zapis udajov 1 studenta do suboru
      fprintf(f,"%s %s %d %s\n",s.meno,s.priezvisko,s.vek,s.bydlisko);
   
      printf("Dalsi zaznam?(a/n)\n");
      scanf("%c",&c);//nacitanie ci chceme pridat dalsieho studenta po nacitani 
   }
   
   fclose(f);//zatvorenie suboru

}