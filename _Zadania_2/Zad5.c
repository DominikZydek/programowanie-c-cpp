#include <stdio.h>

typedef struct {
    char firstName[50];
    char lastName[50];
    char phoneNumber[25];
} Contact;

void convertToPointerArray(Contact contacts[], Contact *contacts_pointers[]) {
    for (int i = 0; i < 3; i++) {
        contacts_pointers[i] = &contacts[i];
    }
}

int nextFreeIndex(Contact contacts[], int length) {
    for (int i = 0; i < length; i++) {
        if (contacts[i].firstName[0] == '\0' && contacts[i].lastName[0] == '\0' && contacts[i].phoneNumber[0] == '\0') {
            printf("%i", i);
            return i;
        }
    }
    return -1;
}

void addContact(Contact *contacts[]) {
    int nfi = nextFreeIndex(*contacts, 100);

    if (nfi == -1) {
        printf("\nIndex Error: Your list is full.\n");
        return;
    }

    printf("\nEnter first name:");
    scanf("%s", contacts[nfi]->firstName);

    printf("\nEnter last name:");
    scanf("%s", contacts[nfi]->lastName);

    printf("\nEnter phone number:");
    scanf("%s", contacts[nfi]->phoneNumber);

    printf("\nSuccessfully added %s %s to your contacts\n", contacts[nfi]->firstName, contacts[nfi]->lastName);
}


void searchContacts(Contact *contacts[]) {
    printf("\nSearch for a contact\n");
    printf("Enter first name:");
    char firstName[50];
    scanf("%s", firstName);

    printf("Enter last name:");
    char lastName[50];
    scanf("%s", lastName);

    for (int i = 0; i < 100; i++) {
        if (contacts[i]->firstName == firstName && contacts[i]->lastName == lastName) {
            printf("\n%s %s: %s\n", contacts[i]->firstName, contacts[i]->lastName, contacts[i]->phoneNumber);
            return;
        }
    }
    printf("\nContact not found\n");
}

void removeContact(Contact *contacts[]) {
    printf("\nRemove a contact\n");
    printf("Enter first name:");
    char firstName[50];
    scanf("%s", firstName);

    printf("Enter last name:");
    char lastName[50];
    scanf("%s", lastName);

    for (int i = 0; i < 100; i++) {
        if (contacts[i]->firstName == firstName && contacts[i]->lastName == lastName) {
            contacts[i]->firstName[0] = '\0';
            contacts[i]->lastName[0] = '\0';
            contacts[i]->phoneNumber[0] = '\0';
            printf("\n%s %s has been removed from your contacts\n", contacts[i]->firstName, contacts[i]->lastName);
            return;
        }
    }
    printf("\nContact not found\n");
}

void printContacts(Contact *contacts[]) {
    printf("\nYour contacts:\n");
    for (int i = 0; i < 100; i++) {
        if (contacts[i]->firstName[0] != '\0' && contacts[i]->lastName[0] != '\0' && contacts[i]->phoneNumber[0] != '\0') {
            printf("%s %s: %s\n", contacts[i]->firstName, contacts[i]->lastName, contacts[i]->phoneNumber);
        }
    }
}

int main() {
    Contact contacts[100] = {};

    contacts[0] = (Contact){"Adam", "Nowak", "112-567-654"};
    contacts[1] = (Contact){"Anna", "Kowal", "146-674-094"};
    contacts[2] = (Contact){"Marcin", "Janowski", "776-136-857"};
    contacts[3] = (Contact){"Pawel", "Slonecznik", "879-750-627"};
    contacts[4] = (Contact){"Joanna", "Palma", "098-633-779"};

    // creating a pointers array
    Contact *contacts_pointers[100];
    convertToPointerArray(contacts, contacts_pointers);

    while (1) {
        printf("\nX Close the program\n");
        printf("\n1 Add a new contact\n");
        printf("2 Search for an existing contact\n");
        printf("3 Remove an existing contact\n");
        printf("4 Print all contacts\n");
        printf("\nChoose one option:");

        char choice;
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                addContact(contacts_pointers);
                break;
            case '2':
                searchContacts(contacts_pointers);
                break;
            case '3':
                removeContact(contacts_pointers);
                break;
            case '4':
                printContacts(contacts_pointers);
                break;
            case 'X':
            case 'x':
                printf("\nGoodbye!\n");
                // main terminates
                return 0;
            default:
                printf("\nInvalid input. Try again\n");
                break;
        }
    }
}
