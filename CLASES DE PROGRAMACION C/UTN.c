
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int get_int(char mensaje_int[])
{
    int num_int;
    puts(mensaje_int);
    scanf("%d",&num_int);

    return num_int;
}

float get_float(char mensaje_float[])
{
    float num_float;
    puts(mensaje_float);
    scanf("%f",&num_float);

    return num_float;
}

char get_char(char mensaje_char[])
{
    float caracter;
    puts(mensaje_char);
    caracter=getche();

    return caracter;
}

int suma_int(int num1_int,int num2_int)
{
    int result_int;

    result_int=num1_int+num2_int;

    return result_int;
}

int resta_int(int nu_res1_int,int nu_res2_int)
{
    int result_res_int;

    result_res_int=nu_res1_int-nu_res2_int;

    return result_res_int;
}

int multiplicar_int(int nu_mul_int1,int nu_mul_int2)
{
    int result_mul_int;

    result_mul_int=nu_mul_int1*nu_mul_int2;

    return result_mul_int;
}

/*******************************************/

int menu_generico(char *mensaje,int desde,int hasta)
{
    int opcion;
    int flag=0;
    do
    {
        if(flag)
        {
            system("cls");
            printf("ERROR, INGRESE UNA OPCION VALIDA\n");
        }

        puts(mensaje);
        scanf("%d",&opcion);
        flag=1;
    }while(opcion<desde||opcion>hasta);

    return opcion;
}

int es_numerico(char *string)
{
    int i=0;
    while(string[i]!='\0')
    {
        if((string[i]!='.')&&(string[i]<'0'||string[i]>'9'))
            return 0;
        i++;
    }
    return 1;
}

int es_telefono(char *string)
{
    int i=0;
    int cont_guiones=0;
    while(string[i]!='\0')
    {
        if((string[i]!=' ')&&(string[i]!='-')&&(string[i]<'0'||string[i]>'9'))
            return 0;
        if(string[i]=='-')
            cont_guiones++;
        i++;
    }
    if(cont_guiones==1)
    {
        return 1;
    }
    return 0;
}

int es_solo_letra(char *string)
{
        int i=0;
        while(string[i]!='\0')
        {
            if((string[i]!=' ')&&(string[i]<'a'||string[i]>'z')&&(string[i]<'A'|| string[i]>'Z'))
            {
                return 0;
            }

            i++;
        }
        return 1;
}

int es_alfa_numerico(char *string)
{
    int i;

    while(string[i]!='\0')
    {
        if((string[i]!=' ')&&(string[i]<'0'||string[i]>'9')&&(string[i]<'a'||string[i]>'z')&&(string[i]<'A'||string[i]>'Z'))
            return 0;
        i++;
    }
    return 1;
}

void get_string(char *mensaje,char *input)
{
    puts(mensaje);
    fflush(stdin);
    scanf("%s",input);

}

int get_string_letras(char *mensaje,char *input)
{
    char aux[50];

    get_string(mensaje,aux);
    if(es_solo_letra(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int get_string_numero(char *mensaje,char *input)
{
    char aux[20];
    get_string(mensaje,aux);
    if(es_numerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}




