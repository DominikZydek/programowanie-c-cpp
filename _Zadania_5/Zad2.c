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

void remove_first(Node** head) {
    if (*head == NULL) {
        printf("The list is empty");
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
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

    remove_first(&head);

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
