#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/queue.h"

void enqueue(Task **front, int id, char name[])
{
    Task *newTask = (Task *)malloc(sizeof(Task));
    newTask->id = id;
    strcpy(newTask->name, name);
    newTask->next = NULL;

    if (*front == NULL)
    {
        *front = newTask;
        return;
    }

    Task *temp = *front;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newTask;
}

void dequeue(Task **front)
{
    if (*front == NULL)
    {
        printf("Queue Empty\n");
        return;
    }

    Task *temp = *front;
    *front = (*front)->next;
    free(temp);
}

void displayQueue(Task *front)
{
    if (front == NULL)
    {
        printf("No tasks in queue\n");
        return;
    }

    Task *temp = front;

    while (temp != NULL)
    {
        printf("Task ID: %d | Name: %s\n", temp->id, temp->name);
        temp = temp->next;
    }
}
