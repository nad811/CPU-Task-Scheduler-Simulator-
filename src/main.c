#include <stdio.h>
#include "../include/queue.h"
#include "../include/scheduler.h"

void createTask(Task **front);

int main()
{
    Task *front = NULL;
    int choice;

    do
    {
        printf("\n--- CPU Task Scheduler ---\n");
        printf("1. Add Task\n");
        printf("2. Display Queue\n");
        printf("3. Process Task\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createTask(&front);
            break;

        case 2:
            displayQueue(front);
            break;

        case 3:
            processTask(&front);
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
