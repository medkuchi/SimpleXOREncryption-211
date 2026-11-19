
#include <stdio.h>
#include <string.h>

int main(void) {
    char message[] = "HELLO";
    int key = 42;
    int length = strlen(message);

    printf("Original: %s\n", message);

    // Encrypt each character using XOR
    for (int i = 0; i < length; i++) {
        message[i] = message[i] ^ key;
    }

    // Print encrypted bytes in hexadecimal
    printf("Encrypted: ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", (unsigned char)message[i]);
    }
    printf("\n");

    // Decrypt using the same key
    for (int i = 0; i < length; i++) {
        message[i] = message[i] ^ key;
    }

    printf("Decrypted: %s\n", message);

    return 0;
}
