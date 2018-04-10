#include <stdio.h>
#include <stdlib.h>

/*int main ()
{
    int numero;
    long long int factorial;
    printf("Ingrese un numero");
    scanf("%d",&numero);
    factorial=numero;
    int contador=numero-1;
    if(numero==0)
    {
        printf("El factorial es: 1");
    }else if(numero<0)
    {
        printf("No se puede realizar el factorial de un numero negativo");
    }else
    {
        for(;contador>0;contador--)
        {
            factorial=factorial*contador;

        }
        printf("El factorial de %d es: %lld",numero, factorial);
    }
    return 0;
}*/
int factorial (int numero);
int main ()
{
    int factor=factorial(0);
    return factor;
}

int factorial (int numero)
{
    int retorno;
    if(numero==0)
    {
        retorno=1;
    }
    else
    {
        retorno=numero*factorial(numero-1);
    }
    return retorno;

}
