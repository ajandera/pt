#include <stdio.h>



void vymena(int *prem1, int *prem2)
{
    int pom = *prem1;
    *prem1 = *prem2;
    *prem2 = pom;
}

void selectSort(int pole[], int n)
{
    int min;
    for (int j =0;j<n-1;j++)
    {
        min = j;

        for (int i = j+1;i<n;i++)
        {
            if (pole[min]>pole[i])
            {
                min = i;

            }
        }
    if (min !=j)
    {
        vymena(&pole[min],&pole[j]);
    }
    }
}

int main (){
    int pole[15] = {5,8,7,4,1,3,6,5,9,8,7,4,2,1,5};
    int n=15;
    selectSort(pole, sizeof(pole)/sizeof (pole[0]));

    for (int i= 0; i<n;i++){
        printf("%d ",pole[i]);
    }
}