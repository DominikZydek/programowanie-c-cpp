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

void remove_by_index(Node** head, int index) {
    if (*head == NULL) {
        printf("The list is empty");
        return;
    }

    if (index == 0) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    Node* current = *head;
    for (int i = 0; current != NULL && i < index - 1; i++) {
        current = current->next;
    }

    // if index is out of bounds
    if (current == NULL || current->next == NULL) {
        printf("Invalid index");
        return;
    }

    Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
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

    printf("List before deleting: ");
    display(head);

    // deleting value = 5
    remove_by_index(&head, 1);

    printf("List after deleting: ");
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
