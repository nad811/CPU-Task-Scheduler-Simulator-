#ifndef QUEUE_H
#define QUEUE_H

typedef struct Task
{
    int id;
    char name[50];
    struct Task *next;
} Task;

void enqueue(Task **front, int id, char name[]);
void dequeue(Task **front);
void displayQueue(Task *front);

#endif
