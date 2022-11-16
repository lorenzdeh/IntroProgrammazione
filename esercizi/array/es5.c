#include <stdio.h>
//scambia(...) e scambia2(...) fanno la stessa cosa
void scambia(int v[], int dim, int i, int j){
    if((i<dim && j<dim) && (i>=0 && j>=0)){
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }
}
void scambia2(int *p, int dim, int i, int j){
    if((i<dim && j<dim) && (i>=0 && j>=0)){
        int tmp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = tmp;
    }
}

int main(){
    int a[2] = {1,2};
    int *p = &a[0];
    scambia2(p, 2, 0, 1);
    printf("%d, %d\n", a[0],a[1]);
}