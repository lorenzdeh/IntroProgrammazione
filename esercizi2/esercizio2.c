#include <stdio.h>
void main(){
    int n,k, tot = 0;
    do{
        printf("Inserire n (>0): ");
        scanf("%d", &n);
        if(n<1) printf("\t!n deve essere maggiore di 0!\n");
    }while(n<1);
    printf("Inserire k: ");
    scanf("%d", &k);
    for(int subTot = k,i = 1; i <= n; i++){
        tot+=subTot;
        subTot*=k;
    }
    printf("\nSommatoria: %d\n", tot);
}