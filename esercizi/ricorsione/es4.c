#include <stdio.h>
int sommaNat(int n, int sum);
int sommatoria(int a, int b);
void main(){
    int a,b;
    printf("Inserire a: ");
    scanf("%d", &a);
    printf("Inserire b (>a): ");
    scanf("%d", &b);
    printf("Sommatoria: %d\n", sommatoria(a,b));
}
//somma dei primi n numeri naturali (ricorsivo)
//sommatoria dei numeri da a -> b della somma precedente(iterativo)
int sommaNat(int n, int sum){
    if(n==1) return (sum+n);
    else return sommaNat(n-1,sum+n);
}
int sommatoria(int a, int b){
    int subTot = 0;
    for(int i = a; i <= b; i++){
        subTot+= sommaNat(i,0);
    }
    return subTot;
}