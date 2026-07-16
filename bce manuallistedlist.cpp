#include <stdio.h>
#include <stdlib.h>

// Node structure definition
struct Node {
    int info;
    struct Node* link;
};

struct Node* start = NULL;

// 1. Insert First Node
void insertFirst(int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = item;
    
    if (start == NULL) {
        start = newNode;
        start->link = NULL;
    } else {
        struct Node* ptr = start;
        start = newNode;
        start->link = ptr;
    }
    printf("Success: ITEM %d inserted at First position.\n", item);
}

// 2. Insert Last Node
void insertLast(int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = item;
    newNode->link = NULL;
    
    if (start == NULL) {
        start = newNode;
    } else {
        struct Node* ptr = start;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = newNode;
    }
    printf("Success: ITEM %d inserted at Last position.\n", item);
}

// 3. Insert Item in a Sorted List
void insertSorted(int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = item;
    
    if (start == NULL) {
        start = newNode;
        start->link = NULL;
        printf("Success: ITEM %d inserted in empty sorted list.\n", item);
        return;
    }
    
    if (item < start->info) {
        struct Node* ptr = start;
        start = newNode;
        start->link = ptr;
        printf("Success: ITEM %d inserted at first position in sorted list.\n", item);
        return;
    }
    
    struct Node *ptr = start, *prev = start;
    while (ptr != NULL) {
        if (item < ptr->info) {
            prev->link = newNode;
            prev = prev->link;
            prev->info = item;
            prev->link = ptr;
            printf("Success: ITEM %d inserted in between sorted list.\n", item);
            return;
        } else if (ptr->link == NULL) {
            ptr->link = newNode;
            ptr = ptr->link;
            ptr->info = item;
            ptr->link = NULL;
            printf("Success: ITEM %d inserted at the end of sorted list.\n", item);
            return;
        } else {
            prev = ptr;
            ptr = ptr->link;
        }
    }
}

// 4. Delete First Node
void deleteFirst() {
    if (start == NULL) {
        printf("Print: Linked-List is empty.\n");
        return;
    }
    struct Node* ptr = start;
    int item = start->info;
    start = start->link;
    free(ptr);
    printf("Print: ITEM %d deleted\n", item);
}

// 5. Delete Last Node
void deleteLast() {
    if (start == NULL) {
        printf("Print: Linked-List is empty.\n");
        return;
    }
    struct Node *ptr = start, *prev = start;
    if (start->link == NULL) {
        int item = start->info;
        start = NULL;
        free(ptr);
        printf("Print: ITEM %d deleted\n", item);
        return;
    }
    while (ptr->link != NULL) {
        prev = ptr;
        ptr = ptr->link;
    }
    int item = ptr->info;
    prev->link = NULL;
    free(ptr);
    printf("Print: ITEM %d deleted\n", item);
}

// 6. Delete Specific Node
void deleteSpecific(int item) {
    if (start == NULL) {
        printf("Print: Linked-List is empty.\n");
        return;
    }
    if (start->info == item) {
        struct Node* ptr = start;
        start = start->link;
        free(ptr);
        printf("Print: ITEM %d deleted\n", item);
        return;
    }
    
    struct Node *ptr = start, *prev = start;
    while (ptr != NULL) {
        if (ptr->info == item) {
            prev->link = ptr->link;
            free(ptr);
            printf("Print: ITEM %d deleted\n", item);
            return;
        } else {
            prev = ptr;
            ptr = ptr->link;
        }
    }
    printf("Print: ITEM %d not found in the list.\n", item);
}

// List dekhne ke liye display function
void display() {
    if (start == NULL) {
        printf("Current List: Empty\n");
        return;
    }
    struct Node* ptr = start;
    printf("Current List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->info);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

int main() {
    int choice, item;
    while (1) {
        printf("\n====== LINKED LIST MENU ======\n");
        printf("1. Insert First\n");
        printf("2. Insert Last\n");
        printf("3. Insert Sorted\n");
        printf("4. Delete First\n");
        printf("5. Delete Last\n");
        printf("6. Delete Specific\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                insertFirst(item);
                break;
            case 2:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                insertLast(item);
                break;
            case 3:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                insertSorted(item);
                break;
            case 4:
                deleteFirst();
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                printf("Enter specific item to delete: ");
                scanf("%d", &item);
                deleteSpecific(item);
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
