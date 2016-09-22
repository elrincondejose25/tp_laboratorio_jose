#include <stdio.h>
#include <stdlib.h>
#define indice 5

int main()
{
    int i;
    int j;
    int h;
    int vector[indice];
    char seguir='s';
    int opcion;
    int nuevoinicializador;
    int opciondesubindice;


    for(i=0;i<indice;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d", vector[i]);
    }
    do
    {


    printf("elija unas de las opciones:\n");
    printf("1.muestrar el vector(array)");
    printf("2.editar el vector(array)");
    printf("5.salir");
    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1 :
            for(j=0;j<indice;j=j+1)
            {
                printf("%d", vector[j]);
            }
                break;

        case 2:
            printf("ingrese que 'elemento' quiere cambiar: ");
            scanf("%d", &opciondesubindice );
            while(opciondesubindice>=indice&&opciondesubindice<0)
            {
                printf("error, ingrese un numero valido");
                scanf("%d", &opciondesubindice );
            }
            printf("ingrese el numero que quiere cambiar: ");
            scanf("%d", &nuevoinicializador);
            vector[opciondesubindice]=nuevoinicializador;

            break;

        case 5 :

            seguir='n';

        default:
            printf("ingrese unas de las opciones");

            break;





    }
    printf("desea seguir ingrese s/n");
    scanf("%c", &seguir);
    }while(seguir=='s');
    printf("\n");
    return 0;
}
