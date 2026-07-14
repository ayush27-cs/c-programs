#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int stack[MAX];
int top = -1;
void push(int item) {
    if (top == MAX - 1) {
        printf("Error: Stack Overflow! (Stack is Full)\n");
    } else {
        top = top + 1;
        stack[top] = item;
        printf("Success: %d inserted into stack.\n", item);
    }
}
void pop() {
    if (top == -1) {
        printf("Error: Stack Underflow! (Stack is Empty)\n");
    } else {
        int item = stack[top];
        top = top - 1;
        printf("Success: POPED element is %d\n", item);
    }
}

int main() {
    int choice, item;
    
    while (1) {
        printf("\n*** STACK OPERATIONS ***\n");
        printf("1. PUSH (Insert)\n");
        printf("2. POP (Delete)\n");
        printf("3. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter element to PUSH: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
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
