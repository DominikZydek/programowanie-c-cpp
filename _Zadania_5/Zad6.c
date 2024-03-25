#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// adding a new element to the beginning
void add_first(Node** head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        return;
    }

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void add_at_index(Node** head, int index, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("No memory left");
        return;
    }
    new_node->data = data;

    if (index == 0) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node* current = *head;
    for (int i = 0; current != NULL && i < index - 1; i++) {
        current = current->next;
    }

    // if index is out of bounds
    if (current == NULL) {
        printf("Invalid index");
        free(new_node);
        return;
    }

    new_node-> next = current->next;
    current->next = new_node;
}

// printing the list contents
void display(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    add_first(&head, 3);
    add_first(&head, 5);
    add_first(&head, 7);

    printf("List before adding: ");
    display(head);

    // adding 4 at index 2
    add_at_index(&head, 2, 4);

    printf("List after adding: ");
    display(head);

    // freeing memory
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
