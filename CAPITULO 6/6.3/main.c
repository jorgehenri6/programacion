#include <stdio.h>

/* Universidad.
El programa, al recibir informacion sobre el numero de alumnos que han ingresado a sus ocho diferentrs carreras en los dos semetres lectivos de los ultimos cinco a�os, obtiene informacion util para el departamento de escolar. */

const int F = 8, C = 2, P = 5;
/* Se declaran constantes para filas, la columna y la profundidad. */
void Lectura(int [][C][P], int, int, int);
void Funcion1(int [][C][P], int, int, int);
void Funcion2(int [][C][P], int, int, int);
void Funcion3(int [][C][P], int, int, int);
/* Prototipo de funciones. Cada prototipo de funcion corresponde a uno de los incisos. */

void main(void)
{
    int UNI[F][C][P];
    Lectura(UNI, F, C, P);
    Funcion1(UNI, F, C, P);
    Funcion2(UNI, F, C, P);
    Funcion3(UNI, 6, C, P);
    /* Se coloca el 6 como parametro ya que es la clave de la Ingenieria en Computacion. */
}
void Lectura(int A[][C][P], int FI, int CO, int PR)
/* La funcion Lectura se utiliza para leer un arreglo tridimensional de tipo entero de FI filas, CO columnas y PR profundidad. Observa que al ser tridimensional se necesitan tres ciclos para recorrer el arreglo. */
{
    int K, I, J;
    for (K=0; I<PR; I++)
        for (I=0; I<FI; I++)
            for (J=0; J<CO; J++)
    {
        printf("A�o: %d\tCarrera: %d\tSemestre: %d  ", K+1, I+1, J+1);
        scanf("%d", &A[I][J][K]);
    }
}
void Funcion1(int A[][C][P],int FI, int CO, int PR)
/* Esta funcion se utiliza para determinar el a�o en el que ingreso el mayor numero de alumnos a la universidad. Observa que el primer ciclo externo corresponde a los a�os. */
{
    int K, I, J, MAY = 0, AO = -1, SUM;
    for (K=0; K<PR; K++)
    /* por cada a�o se suma el imgreso de los dos semestres de las ocho carreras. */
    {
        SUM = 0;
        for (I=0; I<FI; I++)
            for (J=0; J<CO; J++)
                 SUM += A[I][J][K];
        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }
    printf("\n\nA�o con mayor ingreso de alumnos: %d   Alumnos: %d", AO+1, MAY);
}
void Funcion2(int A[][C][P], int FI, int CO, int PR)
/* Esta funcion se utiliza para determinar la carrera que recibio el amyor numero de alumnos el ultimo a�o. Observa que no se utiliza un ciclo para los planos de la profundida, ya que es un dato (PR). */
{
    int I, J, MAY = 0, CAR = -1, SUM;
    for (I=0; I<FI; I++)
    {
        SUM = 0;
        for (J=0; J<CO; J++)
            SUM += A[I][J][PR-1];
        if (SUM > MAY)
        {
            MAY = SUM;
            CAR = I;
        }
    }
    printf("\n\nCarrera con mayor numero de alumnos: %d Alumnos: %d", CAR+1, MAY);
}
void Funcion3(int A[][C][P], int FI, int CO, int PR)
/* Esta funcion se utiliza para determinar el a�o en el que la carrera Ingenieria en Computacion recibio el mayor numero de alumnos. Observa que no se utiliza un ciclo para trabajar con las filas, ya que es un dato (FI). */
{
    int K, J, MAY = 0, A0 = -1, SUM;
    for (K=0; K<PR; K++)
    {
        SUM = 0;
        for (J=0; K<PR; K++)
            SUM += A[FI-1][J][K];
        if (SUM > MAY)
        {
            MAY = SUM;
            A0 = K;
        }
    }
    printf("\n\nA�o con mayor ingreso de alumnos: %d   Alumnos: %d", A0+1, MAY);
}
