#include <stdio.h>
int main(){
    int a[5] = {0,1,2,-1,-6};
    for(int i = 0; i<5;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i<5; i++){
        if(a[i]%2==0){
            a[i] = 0;
        }else{
            a[i] = 1;
        }
        printf("%d ", a[i]);
    }
    printf("\n");
}