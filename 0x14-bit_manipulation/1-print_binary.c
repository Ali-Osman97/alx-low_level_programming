#include <stdio.h>

void printBinary(unsigned int num) {
    int binary[32]; // Assuming a 32-bit integer
    int i;

    for (i = 0; i < 32; i++) {
        binary[i] = (num >> i) & 1;
    }

    printf("Binary representation: ");
    
    // Print binary digits in reverse order (from most significant bit to least)
    for (i = 31; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
}

int main() {
    unsigned int number = 98; // Change this to your desired number
    printBinary(number);
    return 0;
}
