#include <stdio.h>
int fact_rec(int n);
void main(){
    int x = 3; //immaginiamo sia sato dato in input o dovuto a calcoli precedenti
    int k = fact_rec(x);
}
int fact_rec(int n){
    if(n == 1) return 1;
    else return (n*fact_rec(n-1));
}