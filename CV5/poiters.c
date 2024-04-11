#include <stdio.h>
int max (int *p,int n)
{
    int *tmp = p;
    int *tmpMax = p;
    while (tmp-p<n)
    {
        if (*tmp > *tmpMax)
        {
            tmpMax = tmp;
        }
    tmp++;
    }
    return tmpMax-p;
}
int main()
{
    int i, data[] = {5,7,8,10,12, 4, 88, 4,5,9};
    i= max (data, 10);
    printf("vypis idexu %d \n", i);
    printf("vypis hodnoty %d \n", data[i]);

    return i;
}
