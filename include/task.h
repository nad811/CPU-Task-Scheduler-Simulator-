#ifndef TASK_H
#define TASK_H

typedef struct Task
{
    int id;
    char name[50];
    struct Task *next;
} Task;

#endif
