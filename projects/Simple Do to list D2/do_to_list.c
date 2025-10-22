#include <stdio.h>
#include <unistd.h>

int main() {
    char task[100] = ""; 
    int choice;

    printf("Welcome to Simple To-Do List\n");

    while (1) {
        printf("\nSelect an option:\n1. Add a task\n2. View task\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1: {
                printf("Enter your task:\n");
                fgets(task, sizeof(task), stdin);
                printf("Task added!\n");
                break;
            }
            case 2:
                if (task[0] != '\0') {
                    printf("Your task: %s", task);
                } else {
                    printf("No task added yet.\n");
                }
                break;
            case 3:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
