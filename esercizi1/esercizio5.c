#include <stdio.h>
void main(){
    int n = 0, max, min;
    do{
        printf("Quanti numeri vuoi controllre: ");
        scanf("%d",&n);
    }while(n<1);
    int num = 0;
    for(int i = 0; i < n; i++){
        printf("> Inserisci un numero: ");
        scanf("%d", &num);
        if(i==0) {
            max = num;
            min = num;
        } 
        if(max<num) max = num;
        if(min>num) min = num;
    }
    printf("\nIl numero massimo è: %d\n", max);
    printf("Il numero minimo è: %d\n", min);
}