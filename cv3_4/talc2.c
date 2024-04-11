#include <stdio.h>
int main ()
{
    FILE *f;
    int pom;

    f = fopen("abc.txt", "r");
    while (feof(f) == 0)
    {
        fscanf(f,"%d", &pom);
        printf("%d\n", pom);
    }
    fclose(f);
    return 0;
}

