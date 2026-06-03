#include <stdio.h>
#include "../include/queue.h"

void createTask(Task **front)
{
    int id;
    char name[50];

    printf("Enter Task ID: ");
    scanf("%d", &id);

    printf("Enter Task Name: ");
    scanf(" %[^\n]", name);

    enqueue(front, id, name);
}
