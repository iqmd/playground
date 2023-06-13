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
void push(int data,struct Queue *q){
    struct LinkedList *node = malloc(sizeof(struct LinkedList));
    node->data = data;
    if(q->rear)
        q->rear->next = node;
    q->rear = node;

    if(q->front == NULL)
        q->front = q->rear;
}
void displayq(struct Queue *q){
    struct LinkedList *temp = q->front;
    while(temp != NULL){
        printf(" %d ->",temp->data);
        temp=temp->next;
    }
    printf(" NULL");

}
void popfront(struct Queue *q){
    if(q->front == NULL){
       printf("%s", "Queue is empty");
    }
    q->front = q->front->next;
}

