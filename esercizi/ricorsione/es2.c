#include <stdio.h>
int successione_rico(int a_i);
int successione_ite(int a_i);
int quant_rico(int z, int t);
int quant_ite(int z, int t);
void main(){
    // l'obiettivo era calcolare una sommatoria (quant) con una successione all'interno (successione)
    // per il prof le due funzioni più naturali da scrivere erano:
    // quant_ite
    // successione_rico
}
int successione_rico(int a_i){
    if(a_i == 0) return 1;
    return (3+2*successione_rico(a_i-1));
}
int successione_ite(int a_i){
    int an = 1;
    for(int i = 1; i<= a_i; i++){
        an += (2*an)+3;
    }
    return an;
}
int quant_rico(int z, int t){
    if(t == z) return 3*successione_ric(z);
    return (3*successione_ric(z)+quant_rico(z+1, t));
}
int quant_ite(int z, int t){
    int z = 0;
    for(int i = z; i <= t; i++)
        z+= 3 * successione_ric(i);
    return z;
}