//
// Created by Martin on 20. 2. 2024.
//
#include <stdio.h>
void clear (void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
main()
{
    int a,b;
    printf("zadaj prve cislo:");
    while (scanf("%d", &a)!=1)
    {
        printf("zadaj prve cislo:");
        clear();
    }
    while (scanf("%d", &b)!=1)
    {
        printf("zadaj druhe cislo:");
        clear();
    }
    if (a<b)
    {
        printf("cislo %d je mensie ako %d \n",a,b);
    }
    else if (a>b)
    {
        printf("cislo %d je vecsie ako %d \n",a,b);
    }
    else
    {
        printf("cislo %d je rovne cislu %d \n",a,b);
    }
    return 0;
}
