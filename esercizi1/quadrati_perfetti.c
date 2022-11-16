#include <stdio.h>

void main() {
    int n;
    printf("Dammi un numero: ");
    scanf("%d",&n);
    printf("\nQuadrati da 1 a %d", (n));
    for(int i = 1; i <= n; i++){
        printf("\nQuadrato di %d: %d", i, i*i);
    }
    printf("\nFatto\n");
}