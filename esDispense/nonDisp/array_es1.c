#include <stdio.h>
void somma_armonica(int n, double* h){
    if(n == 1)
        *h = 1.0;
    else {
        somma_armonica(n-1,h); // La chiamata deve essere fatta prima della somma se h non è stato inizializzato a 0
        *h += 1.0/n;
    }
}
int main(){
    int n = 5;
    double h;
    somma_armonica(n, &h);
    printf("Somma Armonica [%d]: %f\n", n, h);
}