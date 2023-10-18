#include <stdio.h>

/* Simetrico.
El programa, al recibir como dato arreglo bidimensional cuadrado, determina si el mismo es simetrico. */

const int MAX = 100;

void Lectura(int [][MAX], int);     /* Prototipos de funciones. */
int Simetrico(int [][MAX], int);

void main(void)
{
    int MAT[MAX][MAX], N, RES;
        do
        {
            printf("Ingrese el tamaño del arreglo:  ");
            scanf("%d", &N);
        }
        while (N > MAX || N < 1);   /* Se verifica que el tamaño del arreglo sea valido. */
        Lectura (MAT, N);
        RES = Simetrico(MAT, N);
        if (RES)
            printf("\nEl arreglo bidimencional es simetrico");
        else
            printf("\nEl arreglo bidimencional no es simetrico");
}
void Lectura(int A[][MAX], int T)
/* La funcion Lectura se utiliza para leer un arreglo bidimencional cuadrado de tipo entero de T filas y T columnas. */
{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
    {
        printf("Lila: %d\tColumna: %d", I+1, J+1);
        scanf("%d", &A[I][J]);
    }
}
int Simetrico (int A[][MAX], int T)
/* La funcion Simetrico se utiliza para determinar si el arreglo bidimencional cuadrado es simetrico. Si es simetrico regresa 1, en caso contrario, 0.
Observa que en el segundo ciclo solamente se recorre la amtriz triangular inferior, sin la diagonal principal. */
{
    int I = 0, J, F = 1;
    while ((I < T) && F)
    {
        J = 0;
        while ((J < I) && F)
            if (A[I][J] == A[J][I])
                 J++;
        else
            F = 0;
        I++;
    }
    return (F);
}
