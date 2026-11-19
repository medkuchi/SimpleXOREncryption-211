#include <stdio.h>
#include <string.h>

int main(void) {
    char message[] = "DOG";
    unsigned char key = 42;
    int length = strlen(message);
    unsigned char ciphertext[3];

    printf("Original message: %s\n", message);
    printf("Key: %d\n\n", key);

    for (int i = 0; i < length; i++) {
        unsigned char encrypted = message[i] ^ key;
        ciphertext[i] = encrypted;

        printf("-------------------------\n");
        printf("Original character: %c\n", message[i]);

        // Binary representation
        printf("Binary:      ");
        for (int bit = 7; bit >= 0; bit--) {
            printf("%d", (encrypted >> bit) & 1);
        }
        printf("\n");

        // Hexadecimal representation
        printf("Hexadecimal: %02X\n", encrypted);

        // ASCII representation
        if (encrypted >= 32 && encrypted <= 126) {
            printf("ASCII:       %c\n", encrypted);
        } else {
            printf("ASCII:       Not printable\n");
        }
    }

    printf("-------------------------\n");
    printf("\nFINAL ENCRYPTED CIPHERTEXT\n");
    printf("Binary:      ");
    for (int i = 0; i < length; i++) {
        for (int bit = 7; bit >= 0; bit--) {
            printf("%d", (ciphertext[i] >> bit) & 1);
        }
        printf(" ");
    }
    printf("\n");

    printf("Hexadecimal: ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", ciphertext[i]);
    }

    printf("\nASCII:       ");
    for (int i = 0; i < length; i++) {
        if (ciphertext[i] >= 32 && ciphertext[i] <= 126) {
            printf("%c", ciphertext[i]);
        } else {
            printf(".");
        }
    }

    printf("\n");

    return 0;
}
