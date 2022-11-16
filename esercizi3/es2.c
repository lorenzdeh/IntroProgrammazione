#include <stdio.h>
#include <math.h>
double distanza(double x1, double y1, double x2, double y2);
void main(){
    double x1, y1, x2, y2;
    printf("Distanza: p=(x1,y1) e p'=(x2,y2) \n");
    printf("Inserire x1:");
    scanf("%lf", &x1);
    printf("Inserire y1: ");
    scanf("%lf", &y1);
    printf("Inserire x2: ");
    scanf("%lf", &x2);
    printf("Inserire y2: ");
    scanf("%lf", &y2);
    printf("\nDistanza tra (%lf,%lf) e (%lf,%lf): %lf", x1, y1, x2, y2, distanza(x1,y1,x2,y2));
}
double distanza(double x1, double y1, double x2, double y2){
    double deltaX = x2 - x1, deltaY = y2 - y1;
    deltaX*=deltaX;
    deltaY*=deltaY;
    return sqrt((deltaX+deltaY));
}