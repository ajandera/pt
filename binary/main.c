//
// Created by Martin on 9. 4. 2024.
//
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "binary.c"
#define ARRAY_SIZE 10

int main(void)

{

    char a[ARRAY_SIZE] = {'g','d','i','b','f','h','j','a','c','e'};
    BTREE root;
    root = create_tree(a, 0, ARRAY_SIZE) ;
    assert(root != NULL);
    printf("PREORDER\n");
    preorder(root);
    printf("\n");
    printf("INORDER\n");
    inorder(root);
    printf("\n");
    printf("POSTORDER\n");
    postorder(root);
    printf("\n");
    return 0;
}
