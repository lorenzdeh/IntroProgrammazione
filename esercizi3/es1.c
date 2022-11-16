#include <stdio.h>
int min3(int x, int y, int z);
int tripl(int x, int y);
void main(){
    int x,y,z, sc = 0;
    do{
        printf("\nMenu: \n1. Minimo\n2.Tripletta\n0. Finire\n");
        scanf("%d",&sc);
        if(sc == 1){    
            printf("Minimo:\t\nInserire X: ");
            scanf("%d",&x);
            printf("\t\nInserire Y: ");
            scanf("%d",&y);
            printf("\t\nInserire Z: ");
            scanf("%d",&z);
            printf("il minimo è: %d\n", min3(x,y,z));
        } else if(sc == 2){
            printf("Tripletta:\t\nInserire X: ");
            scanf("%d",&x);
            printf("\t\nInserire Y: ");
            scanf("%d",&y);
            tripl(x,y);
        }
    }while(sc != 0);
}
int min3(int x, int y, int z){
    int min = x;
    if(min>y) min = y;
    if(min>z) min = z;
    return min;
}
int tripl(int x, int y){
    int max = x;
    if(max<y) max = y;
    for(int i = 1; i <= max;i++){
        printf("tripletta: (%d,%d,%d) - minimo: %d\n", x, y, i, min3(x,y,i));
    }
    return 0;
}