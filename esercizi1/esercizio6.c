#include <stdio.h>
void main(){
    int a,b, pot;
    printf("Numero da elevare: ");
    scanf("%d", &a);
    pot=a;
    do{
        printf("Potenza (>0): ");
        scanf("%d", &b);
        if(b<=0) printf("\n\tMAGGIORE DI 0");
    }while(b<=0);
    for(int i=1; i<b;i++){
        pot*=a;
    }
    printf("%d^%d=%d\n",a,b,pot);
}