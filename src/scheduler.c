#include <stdio.h>
#include "../include/scheduler.h"

void processTask(Task **front)
{
    if (*front == NULL)
    {
        printf("No task to process\n");
        return;
    }

    printf("Processing Task ID: %d | Name: %s\n",
           (*front)->id,
           (*front)->name);

    dequeue(front);
}
