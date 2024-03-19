/*  example c1_1.c  hello world  */
#include <stdio.h>
int sucet(int a,int b){
    return a+b;
}


int main()
{
    int a,b;
    printf("Hello World\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("sucet cisel %d a %d je: %d\n",a,b, sucet(a,b));
    return 0;
}