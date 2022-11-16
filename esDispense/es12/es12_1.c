#include <stdio.h>
void leggi_array(int *p, int dim){
    for(int i = 0; i<dim;i++){
        printf("Inserire valore [%d]: ", i)
        scanf("%d", p+i);    
    }
}
double pow2(double num){
    return num*num;
}
/*
(   
    sommatoria(
         (a[i]-media(&a[0],n)^2)
    )
)/n;
*/
double varianza(int *p, int n){
    double m = media(&a[0], n);
    double num = 0;
    for (int i = 0; i<n; i++){
        num += pow2(*(p+i)-m);
    }
    return (num/n)
}
double media(int *p, int dim){
    double somma = 0;
    for(int i = 0; i<dim;i++){
        somma += *(p+i);
    }
    return (somma/dim);
}

void main(){
    int dim=5;
    int a[5]={1,2,3,4,5};
    leggi_array(&a[0], dim);
    printf("Varianza [%d]: %f", dim, varianza(&a[0], dim));
}