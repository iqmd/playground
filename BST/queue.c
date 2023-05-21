#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
};
 struct Queue{
    struct LinkedList *front;
    struct LinkedList *rear;
};
struct Queue *createq(){
    struct Queue *q = malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
void addinq(int data,struct Queue *q){
    struct LinkedList *node = malloc(sizeof(struct LinkedList));
    node->data = data;
    if(q->rear)
        q->rear->next = node;
    q->rear = node;

    if(q->front == NULL)
        q->front = q->rear;
}
void displayq(struct Queue *q){
    while(q->front != q->rear){
        printf(" %d ->",q->front->data);
        q->front=q->front->next;
    }
    printf("%d",q->rear->data);

}
void deletefront(struct Queue *q){
    if(q->front == NULL){
       printf("%s", "Queue is empty");
    }
    q->front = q->front->next;
}

int main(){
    int A[5] =  {1,2,3,4,5};
    struct Queue *q = createq();
    for(int i = 0; i < 3; i++){
       addinq(A[i],q);
    }
    displayq(q);
    return 0;
}
