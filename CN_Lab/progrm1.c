#include <stdio.h>
#include <string.h>

void XORoperation(char *dividend, char *poly, int start) {
    for (int i = 0; i < strlen(poly); i++) {
        if (dividend[start + i] == poly[i]) {
            dividend[start + i] = '0';
        } else {
            dividend[start + i] = '1';
        }
    }
}

void crc(char *ip, char *op, char *poly) {
    int n = strlen(poly) - 1;
    char div[50];
    strcpy(div, ip);
    
    for (int i = 0; i < n; i++) {
        strcat(div, "0");
    }
    
    int len = strlen(div);
    for (int i = 0; i < len - n; i++) {
        if (div[i] == '1') {
            XORoperation(div, poly, i);
        }
    }
    
    printf("The checksum is \n");
    for (int i = 0; i < n; i++) {
        op[i] = div[len - n + i];
        printf("%c", div[len - n + i]);
    }
    op[n] = '\0';
    printf("\n");
}

int main() {
    int index;
    char ip[50], op[50], recv[50], div[50];
    char poly[50];
    
    printf("Enter the i/p message in binary: ");
    scanf("%s", ip);
    
    printf("Enter the generator polynomial: ");
    scanf("%s", poly);
    
    crc(ip, op, poly);
    
    printf("The codeword is: %s%s\n", ip, op);
    strcpy(recv, ip);
    strcat(recv, op);
    
    printf("Enter the index at which you want the error. Enter -1 for no error: ");
    scanf("%d", &index);
    
    if (index != -1 && index >= 0 && index < strlen(recv)) {
        if (recv[index] == '1') {
            recv[index] = '0';
        } else {
            recv[index] = '1';
        }
    }
    
    printf("Receiver side: %s\n", recv);
    char check[50];
    crc(recv, check, poly);
    
    int errorDetected = 0;
    for (int i = 0; i < strlen(check); i++) {
        if (check[i] == '1') {
            errorDetected = 1;
            break;
        }
    }
    
    if (errorDetected) {
        printf("Error in data transmission has occurred\n");
    } else {
        printf("No error occurred\n");
    }
    
    return 0;
}