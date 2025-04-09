#include <stdio.h>

int main() {
    int data[4], code[7], received[7];
    int p1, p2, p3, err;
    
    // Get input data
    printf("Enter 4-bit data: ");
    for (int i = 0; i < 4; i++)
        scanf("%d", &data[i]);
    
    // Generate Hamming code
    code[6] = data[0];  // D4
    code[5] = data[1];  // D3
    code[4] = data[2];  // D2
    code[2] = data[3];  // D1
    
    code[0] = code[2] ^ code[4] ^ code[6];  // P1 (0246)
    code[1] = code[2] ^ code[5] ^ code[6];  // P2 (1256)
    code[3] = code[4] ^ code[5] ^ code[6];  // P3 (3456)
    
    printf("Hamming code: ");
    for (int i = 6; i >= 0; i--)
        printf("%d", code[i]);
    
    // Get received code
    printf("\nEnter received code: ");
    for (int i = 6; i >= 0; i--)
        scanf("%d", &received[i]);
    
    // Error detection and correction (0246 1256 3456)
    p1 = received[0] ^ received[2] ^ received[4] ^ received[6];
    p2 = received[1] ^ received[2] ^ received[5] ^ received[6];
    p3 = received[3] ^ received[4] ^ received[5] ^ received[6];
    err = (p3 << 2) | (p2 << 1) | p1;
    
    if (err) {
        printf("Error at position %d, correcting...\n", err);
        received[err-1] ^= 1;
    } else {
        printf("No errors\n");
    }
    
    printf("Final code: ");
    for (int i = 6; i >= 0; i--)
        printf("%d", received[i]);
    printf("\n");
    
    return 0;
}