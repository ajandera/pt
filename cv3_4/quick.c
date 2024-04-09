#include <stdio.h>

void vymena(int *prem1, int *prem2)
{
    int pom = *prem1;
    *prem1 = *prem2;
    *prem2 = pom;
}
int partition(int pole[], int low,int high)
{
    int pivot = pole[high];
    int i = (low-1);
    for (int j = low; j<=high -1; j++){
        if (pole[j] <pivot){
            i++;
            vymena(&pole[i],&pole[j]);
        }
    }
    vymena(&pole[i+1],&pole[high]);
    return (i+1);
}

void quickSort (int pole[], int low,int high){
    if(low < high)
    {
        int pi = partition(pole,low,high);

        quickSort(pole,low,pi-1);
        quickSort(pole,pi+1,high);
    }
}


int main (){
    int pole[15] = {5,8,7,4,1,3,6,5,9,8,7,4,2,1,5};
    int n=15;
    for (int i= 0; i<n;i++){
        printf("%d ",pole[i]);
    }
    printf("\n");
    quickSort(pole, 0,n-1);

    for (int i= 0; i<n;i++){
        printf("%d ",pole[i]);
    }
}