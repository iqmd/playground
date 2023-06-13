#ifndef QUEUE_H_
#define QUEUE_H_

struct LinkedList{
    int data;
    struct LinkedList *next;
};

struct Queue {
  struct LinkedList *front;
  struct LinkedList *rear;
};

struct Queue *createq();
void push(int data,struct Queue *q);
void displayq(struct Queue *q);
void popfront(struct Queue *q);

#endif // QUEUE_H_
