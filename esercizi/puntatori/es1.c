#include <stdio.h>
int mcd(int x, int y);
void scambia(int *x, int *y);
int mcd_rico(int x, int y);
void main(){
    int x,y;
    printf("mcd calculator\nDigita x: ");
    scanf("%d", &x);
    printf("Digita y: ");
    scanf("%d", &y);
    printf("mcd = %d\n", mcd(x,y));
    printf("mcd_rico = %d\n", mcd_rico(x,y));
    
}
int mcd(int x, int y){
    while(x != y){
        if(x<y) scambia(&x,&y);
        x -= y;
    }
}
// int * x => puntatore intero attivo
// &x => passaggio per riferimento ("anpercend x" oppure "address x")
void scambia(int *a, int* b){
    int temp = *a;
    *a=*b;
    *b = temp;
}
int mcd_rico(int x, int y){ // fatto per divertimento
    if(x == y) return x;
    if(x<y) return mcd_rico(y-x,x);
    else return mcd_rico(x-y, y);
}
/*
int x = 10;
int * p;//B
p = &x; => p assume lo stesso indirizzo di memoria di x
//C
Memoria:
punto B
p = l1    l1 = /
x = l0    l0 = 10

punto C
p = l1    l1 = l0
x = l0    l0 = 10

in codice:
p => l'indirizzo di memoria
*p => il valore di l0            => Dereferencing
x => il valore di l0
&x => l'indirizzo di memoria
*/