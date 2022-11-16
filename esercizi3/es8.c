#include <stdio.h>
double sommatoria(int n);
void main(){
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Risultato sommatoria: %lf\n", sommatoria(n));
}
double sommatoria(int n){
    double val = 0;
    // val = 1/(2*k+1)*(2*k+1)
    // val = val + 1/(2*k+1)*(2*k+1)
    for(double i = 0; i<=n;i++){
        val += 1/((2*i+1)*(2*i+1));
        printf("val_%d: %lf\n",i,val);
    }
    return val;
}
