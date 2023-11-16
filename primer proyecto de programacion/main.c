#include <stdio.h>
#include <string.h>

/* Declaramos la estructura. */

struct cedula
{
    char Nombre[20];
    char Apellido[20];
    int DiaNacimiento, MesNacimiento, AnioNacimiento;
    long long int NumeroDeCedula;        /* long long int nos permite representar un numero entero mas grande que lo que almacenamos en int. */
    char Sexo;
    char TipoDeSangre[4];
    char EquipoDePelota[50];
};

int main()
{
    int cantidadparaRegistrar;            /* Su funcion es preguntar la cantidad de personas que se van aregistrar. */

    printf("Ingrese la cantidad para registrar: ");
    scanf("%d", &cantidadparaRegistrar);

    struct cedula datos[cantidadparaRegistrar];

    for (int a = 0; a < cantidadparaRegistrar; ++a)
    {
        printf("Ingrse los datos de la persona %d:\n", a + 1);

        printf("Nombre: ");
        scanf("%s", datos[a].Nombre);

        printf("Apellido: ");
        scanf("%s", datos[a].Apellido);

        printf("Fecha de Nacimiento (DD MM AAAA): ");
        scanf("%d %d %d", &datos[a].DiaNacimiento, &datos[a].MesNacimiento, &datos[a].AnioNacimiento);

        printf("Numero De Cedula: ");
        scanf("%lld", &datos[a].NumeroDeCedula);

        printf("Tipo de Sangre: ");
        scanf("%s", datos[a].TipoDeSangre);

        printf("Equipo De Pelota Favorito: ");
        scanf("%s", datos[a].EquipoDePelota);

        printf("Sexo (M/F): ");
        scanf(" %c", &datos[a].Sexo);
    }

    printf("\nDatos Del Documento De Identidad:\n");
    for (int a = 0; a < cantidadparaRegistrar; ++a)
    {
        printf("\nDatos de la Persona %d:\n", a + 1);
        printf("Nombre: %s\n", datos[a].Nombre);
        printf("Apellido: %s\n", datos[a].Apellido);
        printf("Fecha de Nacimiento: %02d/%02d/%04d\n", datos[a].DiaNacimiento, datos[a].MesNacimiento, datos[a].AnioNacimiento);
        printf("Número de cédula: %lld\n", datos[a].NumeroDeCedula);     /* "%lld", Este tipo de datos nos proporciona un rango mayor de caracteres en conparacion con el int que tiene menor cnatidad de caracteres. */
        printf("Tipo de sangre: %s\n", datos[a].TipoDeSangre);
        printf("EquipoDePelota: %s\n", datos[a].EquipoDePelota);
        printf("Sexo: %c\n", datos[a].Sexo);
    }
    char NombreDelArchivo[10];
    printf("\nIngrese el nombre del archivo para abrir/crear: ");
    scanf("%s", NombreDelArchivo);
}
