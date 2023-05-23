#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree* root;
void insert(struct tree* root, int data){

    if(root == NULL){
        struct tree *node = malloc(sizeof(struct tree));
        node->data = data;
        node->left = node->right = NULL;
        root = node;
    } else if (root->data < data) {
        insert(root->right, data);
    } else {
        insert(root->left, data);
    }
}

void print(struct tree* root){
    if(root == NULL){
        return;
    }
    printf("%d",root->data);
    print(root->left);
    print(root->right);
}
int main(){
    insert(&root,23);
    insert(&root,12);
    insert(&root,2);
    insert(&root,89);
    print(root);

    return 0;
}
