#include <stdio.h>
#include <stdbool.h>
bool f1(int a[], int n, int x);
int f2(int a[], int n, int x);
int main(){
    int a[4] = {5,7,2,3}, n = 4, x;
    printf("Cosa cercare: ");
    scanf("%d",&x);
    printf("Boolean, f1: %d\n", f1(a,n,x));
    printf("Posizione, f2: %d\n", f2(a,n,x));
}
bool f1(int a[], int n, int x){
    if(f2(a,n,x) != 0) return 1;
    return 0;
}
int f2(int a[], int n, int x){
    int i = 0;
    while(i<n && a[i]!=x) i++;
    return i;
}