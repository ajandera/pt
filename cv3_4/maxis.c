#include <stdio.h>

void tlac (int cislo);
int max(int a,int b);

int main()
{
    int a,b;
    int *p_a;
    printf("zadaj cisla\n");
    scanf("%d", &a);
    tlac(a);
    scanf("%d", &b);
    tlac (b);
    p_a = (a>b) ? &a : &b;
    printf("vecie cislo je: %d\n",*p_a);
    return 0;
}

void tlac(int cislo){
    printf("zadali ste %d\n" ,cislo);
}
