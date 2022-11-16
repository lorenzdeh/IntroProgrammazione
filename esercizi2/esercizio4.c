#include <stdio.h>
int fibonacci(int i);
void main(){//FIBONACCI
    int n;
    printf("i da calcolare per F(i) fibonacci: ");
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}
int fibonacci(int i){
    //caso base
    int f0 = 0, f1 = 1;
    printf("F(0)=%d\n",f0);
    printf("F(1)=%d\n",f1);
    if(i>=2){ //se i >= 2, caso particolare
        int fi, fi_1 = f1, fi_2 = f0;
        for(int j = 2; j<=i;j++){
            fi = fi_1 + fi_2;
            fi_2 = fi_1;
            fi_1 = fi;
        }
    }
    return fi;
}