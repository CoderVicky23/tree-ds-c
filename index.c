#include <stdio.h>
#include <stdlib.h>

#include "structure.h"
#include "insert.h"
#include "traversal.h"


int main() {
    struct NODE * head = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n1 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n2 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n3 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n4 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n5 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n6 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n7 = (struct NODE *) malloc(sizeof(struct NODE));
    struct NODE * n8 = (struct NODE *) malloc(sizeof(struct NODE));
    head -> left = n1;
    head -> right = n2;
    n1 -> left = n3;
    n1 -> right = n4;
    n4 -> left = n7;
    n7 -> right = n8;
    n2 -> right = n5;
    n5 -> left = n6;
    head -> data = 1;
    n1 -> data = 2;
    n2 -> data = 3;
    n3 -> data = 4;
    n4 -> data = 5;
    n5 -> data = 6;
    n7 -> data = 8;
    n8 -> data = 9;
    inorder(head);
    printf("\n");
    preorder(head);
    printf("\n");
    postorder(head);
    return 0;
}