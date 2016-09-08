#include <stdio.h>
#include <stdlib.h>
int cuadrado(int y);
int main()
{
    int x;

    for(x=1;x<10;x++)
    {
        printf("%d\n", cuadrado(x));
    }
    return 0;
}

int cuadrado(int y)
{

    int resultado;
    resultado=y*y;
    return resultado;
}
