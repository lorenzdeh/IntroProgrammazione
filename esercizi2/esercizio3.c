#include <stdio.h>
void main(){
    int a,b, max;
    printf("Inserire a: ");
    scanf("%d", &a);
    printf("Inserire b: ");
    scanf("%d", &b);
    if(b<0)
        printf("\n%d è negativo",b);
    else 
        printf("\n%d è positivo",b);
    if(a%2==1) 
        printf("\n%d è dispari",a);
    else
        printf("\n%d è pari",a);
    printf("\nSomma: %d\n", (a+b));
    if(a<0){   
        printf("(-a) + ");
        max = -a;
    }
    else {
        printf("(+a) + ");
        max = a;
    }
    if(b<0){
        printf("(-b) = ");
        max += -b;
    }
    else {
        printf("(+b) = ");
        max += b;
    }
    printf("%d porta al massimo valore\n", max);
}