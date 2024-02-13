#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        int random_number = rand();
        printf("%d ", random_number);
    }
    printf("\n");
    return 0;
}
