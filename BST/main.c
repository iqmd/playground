#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct queue{
    int data;
    struct queue *next;
} queue;
queue* createqueue(){
   return malloc(sizeof(queue));
}
//void buildTree(int A[], int n,struct tree* root){
//    root = (struct tree*)malloc(sizeof(struct tree));
//}
queue *addinq(int data,queue *q){
    queue *node = malloc(sizeof(queue));
    node->data = data;
    node->next = NULL;
    q = node;
    return q;
}
void displayq(queue *q){
    while(q){
        printf(" %d ->",q->data);
        q = q->next;
    }

}
int main(){

    queue *q = createqueue();
    queue *head = NULL, *tail = NULL;
    int A[] = {2,3,4,5,6,7};
    for(int i = 0; i < 6; i++){
        if(head == NULL){
            head = addinq(A[i],q);
            tail = head;
        }else{

        }
    }
    displayq(q);
    return 0;
}
