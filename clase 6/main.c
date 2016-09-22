#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int promedio;
    int legajo[5];
    int auxint;
    int pparcial[5];
    int sparcial[5];

    for(i=0;i<5;i++)
    {
        printf("ingrese legajo:\n");
        scanf("%d",&auxint);
        while(auxint<1)
            {
                printf("error, ingrese numero de legajo:");
                scanf("%d", &auxint);
            }
        legajo[i]=auxint;
        printf("ingrese nota del primer parcial: ");
        scanf("%d",&auxint);
        while(auxint<0)
        {
            printf("error, ingrese nota: ");
            scanf("%d",&auxint);
        }
        pparcial[i]=auxint;
        printf("ingrese nota del segundo parcial: ");
        scanf("%d", &auxint);
        while(auxint<0)
        {
            printf("error, ingrese nota:");
            scanf("%d",&auxint);
        }
        sparcial[i]=auxint;
        promedio=(float)(pparcial[i]+sparcial[i])/2;
    }
    printf("mostrar lista de notas");
    printf("legajo 1parcial 2parcial promedio");
    for(j=0;j<5;j++)
    {
        printf("%8d%8d%8d%2f",legajo[j],pparcial[j],sparcial[j],promedio);
    }
}
