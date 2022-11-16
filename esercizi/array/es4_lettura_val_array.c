#include <stdio.h>

//entrambe le funzioni fanno la stessa cosa (spiegazioni più in fondo)
void leggi_array(int v[], int dim){
    for(int i = 0; i<dim;i++){
        scanf("%d", &v[i]);    
    }
}
void leggi_array_v2(int *p, int dim){//Deve essergli passato &a[0]
    for(int i = 0; i<dim;i++){
        scanf("%d", p+i);    
    }
}


int main(){
    
}
/*
int a[10];  //VETTORE
int *p;     //INDIRIZZO
int x;      //Intero
p=&a[3];    //p = indirizzo del 4° elemento di a[]
x=*(p+1);   //x = valore in (p + 1), quindi x = a[4] = velore del 5° elemento di a[]


*/