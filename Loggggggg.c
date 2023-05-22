#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_CAPACITY 5

typedef struct {
    int id;
    // Add other user data fields here
} User;

typedef struct {
    User* users[MAX_CAPACITY];
    int access_times[MAX_CAPACITY];
    int size;
} LRUCache;

LRUCache* createCache() {
    LRUCache* cache = (LRUCache*)malloc(sizeof(LRUCache));
    cache->size = 0;
    return cache;
}

void destroyCache(LRUCache* cache) {
    for (int i = 0; i < cache->size; i++) {
        free(cache->users[i]);
    }
    free(cache);
}

void shiftUsers(LRUCache* cache, int start_index) {
    for (int i = start_index; i < cache->size - 1; i++) {
        cache->users[i] = cache->users[i + 1];
        cache->access_times[i] = cache->access_times[i + 1];
    }
}

void addUser(LRUCache* cache, User* user) {
    if (cache->size >= MAX_CAPACITY) {
        // Remove the least recently used user
        shiftUsers(cache, 0);
        cache->size--;
    }

    // Add the new user at the end
    cache->users[cache->size] = user;
    cache->access_times[cache->size] = cache->size;
    cache->size++;
}

User* findUser(LRUCache* cache, int user_id) {
    for (int i = 0; i < cache->size; i++) {
        if (cache->users[i]->id == user_id) {
            // Update the user's access time
            int access_time = cache->access_times[i];
            shiftUsers(cache, i);
            cache->access_times[cache->size - 1] = access_time;
            return cache->users[cache->size - 1];
        }
    }
    return NULL;
}

void printCache(LRUCache* cache) {
    printf("LRU Cache:\n");
    for (int i = 0; i < cache->size; i++) {
        printf("User ID: %d\n", cache->users[i]->id);
    }
    printf("\n");
}

int main() {
    LRUCache* cache = createCache();

    // Register or login users
    User user1 = { 1 };
    addUser(cache, &user1);

    User user2 = { 2 };
    addUser(cache, &user2);

    User user3 = { 3 };
    addUser(cache, &user3);

    User user4 = { 4 };
    addUser(cache, &user4);

    User user5 = { 5 };
    addUser(cache, &user5);

    printCache(cache);

    // Login an existing user
    User* existing_user = findUser(cache, 2);
    if (existing_user != NULL) {
        printf("Existing User ID: %d\n", existing_user->id);
    }

    // Register a new user (exceeding capacity)
    User user6 = { 6 };
    addUser(cache, &user6);

    printCache(cache);

    destroyCache(cache);
    return 0;
}
