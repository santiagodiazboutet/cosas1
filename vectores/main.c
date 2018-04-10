#include <stdio.h>
#include <stdlib.h>
void mostrarVector(int[],int);
void cargarVector(int[],int);
int buscarMaximo(int [],int);
void ordenarVector( int[], int);
// menu cargar mostrar ordenar buscar maximo y mostrar su posicion.

int main()
{
    int vector [5]={};
    int maximo ;
    printf("antes de cargarlo");
    mostrarVector(vector, 5);
    cargarVector(vector,5);
    printf("dsp de cargarlo");
    mostrarVector(vector, 5);
    printf("Hello world!\n");
    maximo=buscarMaximo(vector,5);
    printf("%d", maximo);
    return 0;
}
void mostrarVector(int vector[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n", vector[i]);
    }
}

void cargarVector(int vector[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese un numero");
        scanf ("%d",  &vector[i]);
    }
}
int buscarMaximo(int vector[],int tam)
{
    int i;
    int flag=0;
    int maximo;

            for(i=0;i<tam;i++)
            {
                if(flag==0||vector[i]>maximo)
                {
                    maximo=vector[i];
                    flag=1;
                }
            }
    return maximo;
}
void ordenarVector(int[],int)
{
        int i;
        int j;
        int aux;
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(vector[i]>vector[j])
                {
                    aux=vector[i];
                    vector [i]= vector [j];
                    vector[j]=aux;
                }
            }
        }
}
