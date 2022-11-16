#include <stdio.h>
void main(){
    int num, nSum = 0;
    float sum = 0;
    printf("Media\n");
    do {
        printf("\tDammi un numero (0 per finire): ");
        scanf("%d", &num);
        sum += num;
        nSum++;
    } while (num!=0);
    nSum--;
    printf("\nLa media tra i numeri inseriti è: %f\n", (sum/nSum));
}