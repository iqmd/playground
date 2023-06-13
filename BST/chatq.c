#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList* next;
};

struct Queue {
    struct LinkedList* front;
    struct LinkedList* rear;
};

struct Queue* createq() {
    struct Queue* q = malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void addinq(int data, struct Queue* q) {
    struct LinkedList* node = malloc(sizeof(struct LinkedList));
    node->data = data;
    node->next = NULL;

    if (q->rear)
        q->rear->next = node;
    q->rear = node;

    if (q->front == NULL)
        q->front = q->rear;
}

void displayq(struct Queue* q) {
    struct LinkedList* temp = q->front;
    while (temp != NULL) {
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf(" NULL");
}

void deletefront(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty");
        return;
    }
    struct LinkedList* temp = q->front;
    q->front = q->front->next;
    free(temp);
}

int main() {
    int A[5] = { 1, 2, 3, 4, 5 };
    struct Queue* q = createq();
    for (int i = 0; i < 5; i++) {
        addinq(A[i], q);
    }
    displayq(q);
    return 0;
}
