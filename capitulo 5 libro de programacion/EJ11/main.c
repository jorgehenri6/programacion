#include <stdio.h>

/* Ordenacion por insercion directa. */
const int MAX = 100;

void Lectura(int *, int);
void Ordena(int *, int);          /* Prototipos de funciones. */
void Imprime(int *, int);

void main(void)
{
    int TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tama�o del arreglo:  ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);  /* Se verifica que el tama�o del arreglo sea correcto. */
    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);
}
void Lectura(int A[], int T)
/* La funcion Lectura se utiliza para leer un arreglo unidimencional de T el elemento de tipo entero. */
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemnto %d:  ", I + 1);
        scanf("%d", &A[I]);
    }
}
void Imprime(int A[], int T)
/* Esta funcion se utiliza para escribir un arreglo unidimencional ordenado de T elemtos de tipo entero. */
{
    int I;
    for (I=0; I<T; I++)
    printf("\nA[%d]: %d", I, A[I]);
}
void Ordena(int A[], int T)
/* La funcion Ordena utiliza el metodo de insercion directa para ordenar los elementos del arreglo unidimencional A. */\
{
    int AUX, L, I;
    for (I=1; I<T; T++)
    {
        AUX = A[I];
        L = I - 1;
        while((L >= 0) && (AUX < A[L]))
        {
            A[L+1] = A[L];
            L--;
        }
        A[L+1] = AUX;
    }

}
