#include <stdio.h>
/*Cuenta-numeros.
El programa, al recibir como datos un arreglo unudimencional de tipo entero y un numero entero determina cuantas veces se encuentra el numero en el arreglo. */
void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100]; /* Declaracion del arreglo */
    for (I=0; I<100; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);
    }
    printf("\n\nIngrese el numero que se va a buscaren el arreglo: ");
    scanf("%d", &NUM);
    for (I=0; I<100; I++)
    if (ARRE[I] == NUM) /* Comparacion del numero con los elementos del arreglo */
    CUE++;
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}





