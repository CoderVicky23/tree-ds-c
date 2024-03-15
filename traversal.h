// iteration



// recurssion

void inorder(struct NODE * root) {
    if (root -> left) {
        inorder(root->left);
    }
    printf("%d  ", root -> data);
    if (root -> right) {
        inorder(root -> right);
    }
}

void preorder(struct NODE * root) {
    printf("%d  ", root -> data);
    if (root -> left) {
        preorder(root -> left);
    }
    if (root -> right) {
        preorder(root -> right);
    }
}

void postorder(struct NODE * root) {
    if (root -> left) postorder(root -> left);
    if (root -> right) postorder(root -> right);
    printf("%d  ", root -> data);
}