#include <stdio.h>

void insertSort(int pole[], int n)
{
    int key,i;
    for (int j =0;j<n;j++)
    {
        key =pole[j];
        i = j-1;

        while (i>=0 && pole[i]> key)
        {
            pole[i+1] = pole [i];
            i--;
        }
        pole[i+1] =key;
    }
}

int main (){
    int pole[15] = {5,8,7,4,1,3,6,5,9,8,7,4,2,1,5};
    int n=15;
    insertSort(pole, sizeof(pole)/sizeof (pole[0]));

    for (int i= 0; i<n;i++){
        printf("%d ",pole[i]);
    }
}

