#include <stdio.h>
#include <string.h>

int main(void) {
    char message[] = "CAT";
    int key = 65;
    int length = strlen(message);

    printf("Original message: %s\n", message);
    printf("XOR key: %d\n\n", key);

    // Encrypt each character
    for (int i = 0; i < length; i++) {
        unsigned char original = message[i];
        unsigned char encrypted = original ^ key;

        printf("Character: %c\n", original);
        printf("ASCII value: %d\n", original);
        printf("Key value: %d\n", key);

        // Print original character in binary
        printf("Plaintext:  ");
        for (int bit = 7; bit >= 0; bit--) {
            printf("%d", (original >> bit) & 1);
        }

        // Print key in binary
        printf("\nKey:        ");
        for (int bit = 7; bit >= 0; bit--) {
            printf("%d", (key >> bit) & 1);
        }

        // Print encrypted result in binary
        printf("\nXOR result: ");
        for (int bit = 7; bit >= 0; bit--) {
            printf("%d", (encrypted >> bit) & 1);
        }

        printf("\nEncrypted value: %d", encrypted);
        printf("\nEncrypted hex: %02X\n\n", encrypted);
        message[i] = encrypted;
    }

    // Decrypt the message
    for (int i = 0; i < length; i++) {
        message[i] = message[i] ^ key;
    }

    printf("Decrypted message: %s\n", message);

    return 0;
}
