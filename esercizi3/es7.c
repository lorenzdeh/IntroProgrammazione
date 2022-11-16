#include <stdio.h>
#include <math.h>
double suc(int n, double p);
void main(){
    int n;
    double p;
    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Inserire p: ");
    scanf("%lf", &p);
    printf("Valore successione a n+1: %lf\n", (suc(n,p)));
    printf("Radice di p: %lf\n", sqrt(p));
    
}
double suc(int n, double p){
    /* a di n+1,p
    se n == 1 => val = p
    se n > 1 => val = (val + (p/val))/2 */
    double val = p;
    if(n>1){
        for(int i = 2;i<=n+1;i++){
            val = (val + (p/val))/2;
            printf("a_%d_p: %lf\n", i, val);
        }
    } else if (n<0){
        val = -1;
        printf("n fornito minore di 1");
    }
    return val;
}