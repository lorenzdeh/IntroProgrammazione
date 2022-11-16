#include <stdio.h>
void main(){
    float x;
    printf("Dammi un numero di cui fare il Valore assouluto: ");
    scanf("%f",&x);
    if(x<0)
        printf("%f è negativo: \nValore Assoluto: %f\n", x, -x);
    else
        printf("%f è positivo: \nValore Assoluto: %f\n", x, x);
}