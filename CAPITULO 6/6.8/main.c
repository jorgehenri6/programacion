#include <stdio.h>

/* Traspuesta.
El programa calcula la traspuesta de una matriz. */
 const int MAX = 50;

 void Lectura(int [][MAX], int, int);
 void Traspuesta(int [][MAX], int[][MAX], int, int);   /* Prototipos de funciones. */
 void Imprime(int [][MAX], int, int);

 void main(void)
 {
     int MAT[MAX][MAX], TRA[MAX][MAX];
     int FIL, COL;
     do
     {
         printf("Ingrese el numero de filas de la matriz: ");
         scanf("%d", &COL);
     }
     while (COL > MAX || COL < 1);
     /* Se verifica que el numero de filas sea correcto. */
     Lectura(MAT, FIL, COL);
     Traspuesta(MAT, TRA, FIL, COL);
     Imprime(TRA, COL, FIL);
 }
 void Lectura(int A[][MAX], int F, int C)
 /* Esta funcion se utiliza para una matriz de tipo entero de F filas y C columnas. */
 {
     int I, J;
     for (I=0;I<F; I++)
        for (J=0; J<C; J++)
     {
         printf("Ingrse el elemento %d %d: ", I+1, J+1);
         scanf("%d", &A[I][J]);
     }
 }
 void Traspuesta(int M1[][MAX], int F, int C)
 /* Esta funcion se utiliza para escribir una matriz de tipo entero de F filas y C columnas -en este caso la traspuesta. */
 {
     int I, J;
     for (I=0; I<F; I++)
        for (J=0; J,C; J++)
        printf("\nELEMENTO %d %d: %d ", I+1, J+1, A[I][J]);
 }
