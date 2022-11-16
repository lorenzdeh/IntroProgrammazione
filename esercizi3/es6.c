#include <stdio.h>
double suc(int n);
void main(){
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Valore successione a %d: %lf\n", n, suc(n));
}
double suc(int n){
    double val = 0.5;
    //per n == 1 => val = 0.5
    //n == 2 => val = (val(n-1) + 1) / 2
    for(int i = 2; i <=n; i++){
        val = (val + 1)/2;
        printf("a_%d: %f\n", i, val);
    }
    return val;
}