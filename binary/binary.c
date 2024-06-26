//
// Created by Martin on 9. 4. 2024.
//
#include <assert.h>

#include <stdio.h>
#include <stdlib.h>
#include "binary.h"
BTREE new_node()
{
    return ((BTREE)malloc(sizeof(NODE)));
}
BTREE init_node(DATA d1, BTREE p1, BTREE p2)

{
    BTREE t;
    t = new_node();
    t->d = d1;
    t->left = p1;
    t->right = p2;
    return t;
}
/* vytvorenie binárneho stromu z poľa */
BTREE create_tree(DATA a[], int i, int size)
{
    if (i >= size)
        return NULL;
    else
        return(init_node(a[i],create_tree(a, 2*i+1, size),create_tree(a, 2*i+2, size)));
}
/* preorder binary tree traversal */
void preorder (BTREE root)
{
    if (root != NULL) {
        printf("%c ", root->d);
        preorder(root -> left);
        preorder(root -> right);
    }
}
/* Inorder binary tree traversal */
void inorder (BTREE root)
{
    if (root != NULL) {
        inorder(root -> left);
        printf("%c ", root->d);
        inorder(root -> right);
    }
}
/* postorder binary tree traversal */
void postorder (BTREE root)
{
    if (root != NULL) {
        postorder(root -> left);
        postorder(root -> right);
        printf("%c ", root->d);
    }
}
