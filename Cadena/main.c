#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cadena[100]="hola";
    char cadena2[150]="CHAU";
    int caracteres=0;
    /*int comp=0;
    printf("Ingrese una palabra.\n");
    gets(cadena);
    strcpy(cadena2, "Pirulo");
    comp=strcmp(cadena, cadena2);
    printf("resultado de la comparacion %d",comp);
    printf("\nLa frase ingresada es: %s\n",cadena2);
    caracteres=strlen(cadena);*/
    strupr(cadena);
    strlwr(cadena2);
    strcat(cadena, cadena2);

    printf("%s",cadena);
    return 0;
}
//DEclarar variable donde guarde nombre, otra donde apellido y quiero una tercera que se llame apellido nombre donde se guarde el apellido del usuario y el nombre
//nombre "juan" y apellido "perez" debera mostrar "Perez, Juan" variables nombre y apellido no se deben modificar
