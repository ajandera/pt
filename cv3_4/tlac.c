#include <stdio.h>
int main ()
{
    FILE *f;
    f = fopen("abc.txt", "w");
    for (int i = 1; i<= 10; i++)
    {
        if (i==1)
        {
            fprintf(f, "%d", i);
        }else {
            fprintf(f, "\n%d", i);
        }
    }
    fclose(f);
    return 0;
}