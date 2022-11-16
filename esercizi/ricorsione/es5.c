#include <stdio.h>
int potDue(int n);
int moltiplicatoria(int a, int b, int n);
void main(){
    int a,b,n;
    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Inserire a: ");
    scanf("%d", &a);
    printf("Inserire b (>a): ");
    scanf("%d", &b);
    printf("produttoria: %d\n", produttoria(a,b,n));
}
int potDue(int n){
    if(n>0) return n*potDue(n-1); //se n == 0, n*1 => viene già fatto dal return dopo n*1 == n
    return n;
}
int produttoria(int a, int b, int n){
    int subTot = 0;
    for(int i = a; i <= b/2; i++){
        subTot*= (potDue(n)/a)-b;
    }
    return subTot;
}