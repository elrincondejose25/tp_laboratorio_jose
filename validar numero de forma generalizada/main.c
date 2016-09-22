#include <stdio.h>
#include <stdlib.h>

int validarrango(int x,int min,int max);

int main()
{
    int numero;
    int rango1;
    int rango2;


    printf("ingrese los rangos para validar el valor: \n");
    printf("primer rango:");
    scanf("%d", &rango1);
    printf("segundo rango:");
    scanf("%d", &rango2);
    printf("ingrese un numero entre %d y %d\n",rango1,rango2);
    scanf("%d", &numero);

    if(validarrango(numero,rango1,rango2))
    {
        printf("valido");

    }
    else
    {
        printf("no es valido");
    }
    return 0;
}

int validarrango(int x,int min,int max)
{
    int esvalido=0;
    if(x>=min && x<=max)
    {
        esvalido=1;
    }
    return esvalido;
}
