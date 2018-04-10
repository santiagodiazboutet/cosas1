#include <stdio.h>
#include <stdlib.h>
int sumarNumeros(void);
int main()
{   int resultado;
    resultado=sumarNumeros();
    printf("El resulatod es %d",resultado);
}
int sumarNumeros(void)
{
    int numero1;
    int numero2;
    int resultado;
    printf("Ingrese un numero:\n");
    scanf("%d",&numero1);
    printf("Ingrese otro numero:\n");
    scanf("%d",&numero2);
    resultado=numero1+numero2;
    return resultado;
}
