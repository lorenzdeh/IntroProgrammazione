#include <stdio.h>
int somma(int v[],int n);
int main(){
    int a[5], n = 5;
    printf("Somma di valori: \n");
    for(int i = 0; i<n;i++){ //ES 1, 2, 3, 4, 5
        printf("Valore %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\tSomma: %d\n", somma(a, n)); // 1+2+3+4+5 = 15
}
int somma(int v[],int n){
    //T = sommatoria da 0 a n-1 di a[i]
    int tot = 0;
    for(int i = 0; i<n;i++){
        tot+=v[i];
        //A => Disegnare memoria
    }
    return tot;
}