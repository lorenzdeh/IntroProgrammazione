#include <stdio.h>
int contrDiff(double x, double y, double e);
void main(){
    double x,y,e;
    printf("Inserire epsilon: ");
    scanf("%lf", &e);
    printf("Inserire x: ");
    scanf("%lf", &x);
    printf("Inserire y: ");
    scanf("%lf", &y);
    if(contrDiff(x,y,e) == 0){
        printf("Numeri diversi con Epsilon uguale a: %lf", e);
    } else {
        printf("Numeri uguali con Epsilon uguale a: %lf", e);
    }
}
int contrDiff(double x, double y, double e){
    //return 1 se |x-y| < e
    //return 0 se |x-y| >= e
}