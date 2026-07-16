#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;
void addq(int item) {
    if (rear == MAX - 1) {
        printf("Error: Queue Full! (queuefull)\n");
    } else {
        if (front == -1) front = 0; 
        rear = rear + 1;
        queue[rear] = item;
        printf("Success: %d added to the queue.\n", item);
    }
}

void deleteq() {
    if (front == -1 || front > rear) {
        printf("Error: Queue Empty! (queueempty)\n");
    } else {
        int item = queue[front];
        printf("Success: DELETED element from front is %d\n", item);
        front = front + 1;
    }
}

int main() {
    int choice, item;
    
    while (1) {
        printf("\n*** QUEUE OPERATIONS ***\n");
        printf("1. ENQUEUE (Insert)\n");
        printf("2. DEQUEUE (Delete)\n");
        printf("3. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter element to add: ");
                scanf("%d", &item);
                addq(item);
                break;
            case 2:
                deleteq();
                break;
            case 3:
                printf("Exiting Program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
