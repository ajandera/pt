#include <stdio.h>
#include <stdbool.h>


void vymena(int *prem1, int *prem2)
{
    int pom = *prem1;
    *prem1 = *prem2;
    *prem2 = pom;
}

void bubleSort(int pole[], int n)
{
    bool kontrola;
    for (int j =0;j<n-1;j++)
    {
        kontrola = false;
        for (int i = 0;i<n-1-j;i++)
        {
            if (pole[i]>pole[i+1])
            {
                vymena(&pole[i],&pole[i+1]);
                kontrola =true;
            }
        }
        if (!kontrola){
            return;
        }
    }
}

int main (){
    int pole[15] = {5,8,7,4,1,3,6,5,9,8,7,4,2,1,5};
    int n=15;
    bubleSort(pole, sizeof(pole)/sizeof (pole[0]));

    for (int i= 0; i<n;i++){
        printf("%d ",pole[i]);
    }
}
