#include<stdio.h>
void tridimensional(int filas,int columnas,int num,int matriz[filas][columnas][num]);

int main(){
int filas, columnas,num;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Numero de matrices: ");
    scanf("%d", &num);
    printf("Primera Matriz:\n");
    int matriz[filas][columnas][num];
    tridimensional(filas,columnas,num,matriz);
   

return 0;   
}

