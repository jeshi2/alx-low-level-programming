#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* generate_key(const char* username) {
    size_t username_length = strlen(username);
    char* key = (char*)malloc(username_length + 1);
    size_t i;

    if (key == NULL) {
        return NULL;
    }

    for (i = 0; i < username_length; i++) {
        key[i] = username[i] ^ 0x55;
    }
    key[i] = '\0';

    return key;
}

int main(int argc, char* argv[]) {
    char* username;
    char* key;

    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    username = argv[1];
    key = generate_key(username);

    if (key != NULL) {
        printf("%s\n", key);
        free(key);
        return 0;
    } else {
        fprintf(stderr, "Error: Failed to generate key.\n");
        return 1;
    }
}
