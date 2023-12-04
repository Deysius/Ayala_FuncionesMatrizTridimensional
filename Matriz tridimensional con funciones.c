#include<stdio.h>
void tridimensional(int filas,int columnas,int num,int matriz[filas][columnas][num]);
//Utilizo un void, ya que no me arroja un resultado
int main(){
int filas, columnas,num;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Numero de matrices: ");
    scanf("%d", &num);
    printf("Primera Matriz:\n");
    //Solicito al usuario las dimensiones de las matrices
    int matriz[filas][columnas][num];
    tridimensional(filas,columnas,num,matriz);
    //Finalmente hago el llamado de la funcion, con esto puedo imprimir diversas matrices siempre y cuando las dimensiones esten establecidas, ahorrando espacio.

return 0;   
}
void tridimensional(int filas,int columnas,int num,int matriz[filas][columnas][num]){
    for (int k = 1; k< num; k++){
    //Mediante este for se imprime todas la matrices menos una, todas estas se llenaran con 0, debido a que comienzan desde el numero 1 por lo tanto siempre imprimira una matriz menos de lo que pidio el usuario
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j][k] = 0;
                printf("%d ", matriz[i][j][k]);
                }
                printf("\n");
                }
                printf("\n");
                }
    for (int k = num; k<= num; k++){
    //Mediante este for, imprimo mi ultima matriz llenos de 1
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j][k] = 1;
                printf("%d ", matriz[i][j][k]);
                }
                printf("\n");
                }
                }
}

