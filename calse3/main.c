#include <stdio.h>
#include <stdlib.h>
int sumarNumeros(int numero1,int numero2);
int main()
{   int numero1;
    int numero2;
    int resultado;
    printf("Ingrese un numero:\n");
    scanf("%d",&numero1);
    printf("Ingrese otro numero:\n");
    scanf("%d",&numero2);
    resultado=sumarNumeros(numero1,numero2);
    printf("El resultado es %d",resultado);
}
int sumarNumeros(int numero1,int numero2)
{
    int resultado;

    resultado=numero1+numero2;
    return resultado;
}
