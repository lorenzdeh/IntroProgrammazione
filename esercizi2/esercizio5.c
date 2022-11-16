#include <stdio.h>
int fatt(int n){
    int fatt = n;
    for(int i = 1; i<=n;i++){
        fatt*= i;
    }
    return fatt;
}
float fattProf(int n, int k){
    float nFatt=1, kFatt=1, n_kFatt=1;
    for(int i = n; i>=1 ;i--){
        if(i<=k) kFatt*=i;
        if(i<=(n-k)) n_kFatt*=i;
        nFatt*=i;
    }
    return (nFatt / (kFatt*n_kFatt));
}
void main(){//Coefficiente binomiale
    int n,k;
    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Inserire k: ");
    scanf("%d", &k);
    if(n>k){
        int num = 1;
        /*
        // VERSIONE CORTA
        for(int i = n; i > n-k; i--){// condizione ok
            num *= i;
        }
        printf("\nNum %d",num);
        for(int i = (n-k); i>0; i--){// condizione sbagliata
            num /= i;
            printf("\nFatt: %d %d\n", i, num);
        }
        printf("\nFatt: %d\n", num);*/
        //Versione 'lunga'
        /*num = fatt(n) / (fatt(k)*fatt(n-k));
        printf("\nFatt: %d\n", num);*/
        //versione prof
         printf("\nFatt: %f\n", fattProf(n,k));
    } else if(n==k) {
        printf("\n1\n");
    } else {
        printf("\n0\n");
    }
}
