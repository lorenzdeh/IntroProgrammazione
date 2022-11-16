#include <stdio.h>
int isPrime_rico(int n, int div);
void main(){
    int num = 0;
    printf("> Test ricorsivo primo: ");
    scanf("%d", &num);
    if(isPrime_rico(num,num-1) == 0)
        printf("\n\t Non è un numero primo\n");
    else 
        printf("\n\t è un numero primo\n");
}
//punto 2
int isPrime_rico(int n, int m){//return 0 = non primo;
    if(m == 1) return 1;
    if(n%m == 0) return 0;
    return isPrime_rico(n, m-1);
}