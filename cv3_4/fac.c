#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long long int fact(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    return num * fact(num-1);
}
long long int factor(int num){
    long long int fac = 1;
    for (int i=num; i > 0; i--){
        fac = i * fac;
    }
    return fac;
}
void clear (void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main (){
    int a;
    clock_t start, end;
    double cpu_time_used;
    printf("zadaj cislo na factorial:");
    while (scanf("%d", &a)!=1)
    {
        printf("zadaj cislo na faktorial:");
        clear();
    }
    start = clock();
    printf("faktorial %d je %lld\n",a, fact(a));
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f\n",cpu_time_used);
    start = clock();
    printf("faktorial %d je %lld\n",a, factor(a));
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f\n",cpu_time_used);
}