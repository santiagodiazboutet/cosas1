#include <stdio.h>
#include <stdlib.h>

int main()
{
        int vector [5]={1,3,4,2,9};
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
