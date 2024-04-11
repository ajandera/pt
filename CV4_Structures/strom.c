#include <stdlib.h>
#include <stdio.h>
#include <time.h>


struct uzol{
    int data;
    struct uzol *right, *left;
};

typedef struct uzol vrchol;

void insert(vrchol **v, vrchol *prvok){
    if (!(*v)){
        *v = prvok;
        return;
    }
    if (prvok->data<(*v)->data)
    {
        insert(&(*v)->left,prvok);
    } else if (prvok->data>(*v)->data)
    {
        insert(&(*v)->right,prvok);
    }

}
void printout(vrchol *v)
{
    if (v->left) printout(v-> left);
    printf("%d\n", v->data);
    if (v->right) printout(v-> right);
}

int main(){
    srand(time(NULL));
    vrchol *actual, *koren;
    koren = NULL;
    for(int i =1; i<=10;i++)
    {
        actual = (vrchol *)malloc(sizeof(vrchol));
        actual -> left = actual -> right = NULL;
        actual ->data = (rand() % 100);
        insert(&koren, actual);
    }
    printout(koren);
    return 0;
}