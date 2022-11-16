#include <stdio.h>

void main() {
    int n;
    printf("Give me a number: ");
    scanf("%d", &n);
    printf("\nYou gave me the number: %d\n", n);
    if(n%2 == 1) {
        printf("\nIt is an odd number\n");
    } else {
        printf("\nIt is an even number\n");
    }
}