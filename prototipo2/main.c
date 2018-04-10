#include <stdio.h>
#include <stdlib.h>
void sumarNumeros(int numero1,int numero2);
int main()
{   int numero1;
    int numero2;
    printf("Ingrese un numero:\n");
    scanf("%d",&numero1);
    printf("Ingrese otro numero:\n");
    scanf("%d",&numero2);
    sumarNumeros(numero1,numero2);
}
void sumarNumeros(int numero1,int numero2)
{
    int resultado;

    resultado=numero1+numero2;
    printf("El resulatod es %d",resultado);
}
