#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CACHE_SIZE 10

typedef struct {
    char username[20];
    char password[20];
} User;

typedef struct Node {
    User* user;
    struct Node* next;
    struct Node* prev;
} Node;

Node* cache = NULL;

Node* createNode(User* user) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->user = user;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertNode(Node* node) {
    if (cache == NULL) {
        cache = node;
    } else {
        node->next = cache;
        cache->prev = node;
        cache = node;
    }
}

void removeNode(Node* node) {
    if (node->prev != NULL) {
        node->prev->next = node->next;
    } else {
        cache = node->next;
    }

    if (node->next != NULL) {
        node->next->prev = node->prev;
    }

    free(node);
}

void moveToFront(Node* node) {
    if (node != cache) {
        removeNode(node);
        insertNode(node);
    }
}

User* findUser(char* username) {
    Node* currentNode = cache;
    while (currentNode != NULL) {
        if (strcmp(currentNode->user->username, username) == 0) {
            moveToFront(currentNode);
            return currentNode->user;
        }
        currentNode = currentNode->next;
    }
    return NULL;
}

void registerUser() {
    User* newUser = (User*)malloc(sizeof(User));
    printf("Enter username: ");
    scanf("%s", newUser->username);

    if (findUser(newUser->username) != NULL) {
        printf("Username already exists.\n");
        free(newUser);
        return;
    }

    printf("Enter password: ");
    scanf("%s", newUser->password);

    Node* newNode = createNode(newUser);
    insertNode(newNode);

    printf("Registration successful.\n");
}

void loginUser() {
    char username[20];
    char password[20];

    printf("Enter username: ");
    scanf("%s", username);

    User* user = findUser(username);

    if (user == NULL) {
        printf("User not found.\n");
        return;
    }

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(user->password, password) == 0) {
        printf("Login successful.\n");
    } else {
        printf("Incorrect password.\n");
    }
}
int main() {
int choice;
while (1) {
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            registerUser();
            break;
        case 2:
            loginUser();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
    }

    printf("\n");
}

return 0;
}
