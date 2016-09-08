#include <stdio.h>
#include <stdlib.h>

int main()/**/
{
    float num; // otra forma de hacerlo
    int flag=0;//flag=1;
    float max;
    float min;
    float promedio;
    char respuesta='s';
    int contador=0;
    float suma=0;


    while(respuesta=='s')
        {
            printf("ingrese un numero:\n");
            scanf("%f", &num);
            fflush(stdin);



                    if(num>max || flag==0)//o usamos... ||flag)
                        {
                            max=num;
                        }
                    if(num<min|| flag==0)//o usamos... ||flag)
                        {
                            min=num;
                            flag=1//flag=0;
                        }
                }
            contador=contador+1;
            suma=suma+num;
            printf("desea seguir? ingrese: s\n ");
            scanf("%c", &respuesta);

        }
        promedio=suma/contador;
        printf("el numero max es: %2f\nel numero min es: %f\nel promedio es: %f\n",max,min,promedio);

    return 0;
}
