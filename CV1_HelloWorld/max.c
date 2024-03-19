#include <stdio.h>

void tlac (int cislo);
int max(int a,int b);

int main()
{
    int a,b;
    printf("zadj cisla\n");
    scanf("%d", &a);
    tlac(a);
    scanf("%d", &b);
    tlac (b);
    printf("vecie cislo je: %d\n",max(a,b));
    return 0;
}

void tlac(int cislo){
    printf("zadali ste %d\n" ,cislo);
}
int max(int a, int b){
    return (a>b) ? a : b;
}