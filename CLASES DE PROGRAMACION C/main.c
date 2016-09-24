#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include "UTN.h"
/**********************************************************/
/**clase de lunes1*/
//int main()
//{
//
//    int numero;
//    int max;
//    int min;
//    int contpos=0;
//    int contneg=0;
//    int i=0;
//    float promedio;
//    int flag=0;
//    int caracter;
//    char seguir;
//
//
//    printf("ingrese numeros hasta llegar\n ");
//
//    do
//    {
//        printf("ingrese un numero:\n");
//        scanf("%d",&numero);
//
//        if(i==0)
//        {
//            max=numero;
//            min=numero;
//        }
//        else
//        {
//            if(numero>max)
//            {
//                max=numero;
//            }
//            if(numero<min)
//            {
//                min=numero;
//            }
//
//        }
//
//
//
//        /*otra forma de hacer max y min
//
//        /*if(numero>max|| flag==0)
//        {
//            max=numero;
//        }
//        if(numero<min||flag==0)
//        {
//            min=numero;
//
//            flag=1;
//        }*/
//
//
//
//
//
//
//        if(numero<0)
//        {
//            contneg++;
//        }
//        else
//        {
//            contpos++;
//        }
//
//        printf("deseab seguir ingrese <s> o <n>");
//        fflush(stdin);
//        seguir=getchar();
//    }
//    printf("")
//
//    while(seguir=='s');
//
//    return 0;
//}
//
//
//int posicionmax;
//int i=0;
//
//
//int posicionmin;
//
//
//for(i=0;i<5;i++)
//{
//
//
//        if(numero>max|| flag==0)
//        {
//            max=numero;
//            posicionmax=i+1;
//        }
//        if(numero<min||flag==0)
//        {
//            min=numero;
//            posicionmin=i+1;
//
//            flag=1;
//        }
//}
//    printf("el numero max fue ingresado en la posicion %d",posicionmax);
//


/************************************************************************/

//int main()
//{
//    int numero;
//    int max;
//    int min;
//    int cont_pos=0;
//    int cont_neg=0;
//    char seguir='s';
//    int flag=0;
//    int i=0;
//    float promedio;
//    int suma=0;
//    int cont_impa=0;
//    int cont_par=0;
//
//
//    do
//    {
//        printf("ingrese un numero\n");
//        scanf("%d",&numero);
//
//        if(numero<0)
//        {
//            cont_neg++;
//        }
//        else
//        {
//            cont_pos++;
//        }
//
//        if(numero>max||flag==0)
//        {
//            max=numero;
//        }
//        if(numero<min||flag==0)
//        {
//            min=numero;
//            flag=1;
//        }
//        if(numero%2==0)
//        {
//            cont_par++;
//        }
//        else
//        {
//            cont_impa++;
//        }
//
//        i++;
//        suma+=numero;
//        printf("desea seguir ingresando numeros <s> o <n>\n");
//        fflush(stdin);
//        seguir=getche();
//        system("cls");
//
//    }while(seguir=='s');
//
//    promedio=(float)suma/i;
//
//    printf("la suma de todos los numeros es %d\nel promedio es %f\n el maximo numero es %d\n el numero minimo es %d\n la cantidad de numero positivos es %d \nla cantidad de numeros negativos es %d\n la cantidad de numeros impares es %d\nla cantidad de numeros pares es%d\n",suma,promedio,max,min,cont_pos,cont_neg,cont_impa,cont_par);
//    printf("la cantidad de numeros ingresados es %d",i);
//
// return 0;
//
//}

/**************************************************************************/
/**clase de microcontroladores*/
//int main()
//{
//    printf("reglon 1\n");
//    printf("reglon 2\n");
//    return 0;
//}


/***********************************************/

//int main()
//{
//    int numero_int1;
//    int numero_int2;
//    int suma;
//
//
//    numero_int1=get_int("ingrese el primer numero:");
//    numero_int2=get_int("ingrese el segundo numero:");
//    system("cls");
//    suma=numero_int1+numero_int2;
//
//    printf("el primer numero ingresado es %d y el segundo es %d\n",numero_int1,numero_int2);
//    printf("la suma de los dos numeros es: %d",suma);
//
//    return 0;
//}
/*****************************************************/
//int main()
//{
//    float numero_float1;
//    float numero_float2;
//
//    printf("ingrese dos numero reales\n");
//    numero_float1=get_float("ingreese el primer numero:");
//    numero_float2=get_float("ingrese el segundo numero:");
//    if(numero_float1==numero_float2)
//    {
//        printf("los numeros son iguales\n");
//    }
//
//    if(numero_float2<numero_float1)
//    {
//        printf("el numero mayor es el primer numero ingresado\n");
//    }
//    else
//    {
//        printf("el numero mayor es el segundo numero ingresado\n");
//    }
//
//    return 0;
//}


/**********************************************************************/
/***clase de programacion miercoles1**/

//void sumar1(void);
//void sumar2(int num1, int num2);
//int sumar3(void);
//int sumar4(int num1, int num2);
//int cuadrado(int x);
//
//
//
//
//
//int main()
//{
//    int num1;
//    int num2;
//    int suma;
//    int suma3;
//    int resta;
//    int multiplicar;
//
//    num1=get_int("ingrese un primer numero");
//    num2=get_int("ingrese el segundo numero");
//    suma=suma_int(num1,num2);
//    printf("la suma de los 2 numeros es: %d \n",suma);
//    resta=resta_int(num1,num2);
//    printf("la resta de los 2 numeros es: %d \n",resta);
//    multiplicar=multiplicar_int(num1,num2);
//    printf("la multiplicacion de los 2 numeros es: %d \n",multiplicar);
//
//    sumar1();
//    sumar2(num1,num2);
//    suma3=sumar3();
//
//
//    printf("el redultado de la suma3 es %d\n",suma3);
//    printf("el redultado de la suma3 es %d\n",sumar3());
//
//    printf("el redultado de la suma4 es %d\n",sumar4(num1,num2));
//
//    printf("el cuadrado del primer numero es:%d",cuadrado(num1));
//    printf("el cuadrado del segundo numero es:%d",cuadrado(num2));
//
//    return 0;
//}
//
//void sumar1(void)
//{
//    int num1;
//    int num2;
//    int suma;
//
//    num1=get_int("ingrese numero 1");
//    num2=get_int("ingrese numero 2");
//    suma=num1+num2;
//
//    printf("el redultado de la suma1 es %d\n",suma);
//
//}
//
//void sumar2(int num1, int num2)
//{
//    int suma;
//
//    num1=get_int("ingrese numero 1");
//    num2=get_int("ingrese numero 2");
//
//    suma=num1+num2;
//
//    printf("el redultado de la suma2 es %d\n",suma);
//
//}
//
//int sumar3(void)
//{
//    int num1;
//    int num2;
//    int suma;
//
//    num1=get_int("ingrese numero 1");
//    num2=get_int("ingrese numero 2");
//    suma=num1+num2;
//
//    return suma;
//
//}
//
//int sumar4(int num1, int num2)
//{
//    int suma;
//    suma=num1+num2;
//
//    return suma;
//}
//
//int cuadrado(int x)
//{
//    int cuad;
//    cuad=x*x;
//
//    return cuad;
//}

/******************************************************/
/**clase de programacion jueves1*/

//int elcuadrado(int numfun);
//
//
//int main()
//{
//    int num1;
//    int cuad;
//
//    printf("ingrese un numero\n");
//    scanf("%d",&num1);
//    cuad=num1*num1;
//
//    printf("el cuadrado del numero es %d\n",cuad);
//    printf("ingrese un numero\n");
//    scanf("%d",&num1);
//    cuad=elcuadrado(num1);
//    printf("el cuadrado del numero es %d\n",cuad);
//return 0;
//}
//
//int elcuadrado(int numfun)
//{
//    int cuad;
//
//    cuad=numfun*numfun;
//
//    return cuad;
//}

/*****************************************************/
//**menu de tp1*/

//int men_u(char *texto,int desde,int hasta);
//
//int main()
//{
//
//    int opcion;
//    opcion=men_u("calculadora\nseleccione una de las opciones\n1.suma\n2.resta\n3.multiplicacion\n4.division\n",1,4);
//    return 0;
//}
//
//
//int men_u(char *texto,int desde,int hasta)
//{
//    int opcion_menu;
//    int ok=0;
//
//    do
//    {
//
//        if(ok)
//        {
//            printf("error,boludo ingresa una opcion valida\n");
//
//        }
//
//    printf("%s",texto);
//    scanf("%d",&opcion_menu);
//    system("cls");
//    }while(ok=(opcion_menu<1 || opcion_menu>4));
//
//
//    return opcion_menu;
//
//}

/**************************************************************/
/**clase de micro*/

//int main()
//{
//    int lado_a,lado_b,lado_c;
//
//    lado_a=get_int("ingrese el lado a:\n");
//    lado_b=get_int("ingrese el lado b\n");
//    lado_c=get_int("ingrese el lado c\n");
//
//    if(lado_a==lado_b)
//        if(lado_b==lado_c)
//            printf("el triangulo es equilatero\n");
//        else
//            printf("el triangulo es isoseceles\n");
//    else
//        if(lado_b==lado_c)
//            printf("el triangulo es isoceles\n");
//        else
//            if(lado_c==lado_a)
//                printf("el triangulo es isoceles\n");
//            else
//                printf("el triangulo es escaleno\n");
//
//
//
//    return 0;
//}
/**********************************************************************/
/**clase de programacion jueves */
//#define cant 10
//int main()
//{
//    float num[cant];
//    int i;
//    float acum=0;
//
//    for(i=0;i<cant;i++)
//    {
//        printf("ingresar numero:\n");
//        scanf("%f",&num[i]);
//        acum=acum+num[i];
//    }
//    for(i=0;i<cant;i++)
//    {
//        printf("el indice <%d> numero:%f\n",i,num[i]);
//
//    }
//    printf("la suma es :%f",acum);
//    return 0;
//}

/**hacemos la funcion swap , hacemos burbujeo, y jodemos con caracteres*/

/************************************************************/
/***clase de jueves*/
//#include <string.h>
//#define cant_nom 1

//int main()
//{
//    int i;
//    char nombre[cant_nom][20];
//    char apellido[cant_nom][20];
//    char sexo[cant_nom][20];
//    int notas[cant_nom];
//    int legajo[cant_nom];
//
//    char aux_string[500];
//
//    char ori_nombre[500];
//    char ori_apelli[500];
//    char ori_sexo[200];
//    int ori_notas;
//    int ori_legajo;
//
//    int aux;
//    int j;
//
//
//    for(i=0;i<cant_nom;i++)
//    {
//        printf("ingrese nombre:");
//        fflush(stdin);
//        gets(ori_nombre);
//        if(strlen(ori_nombre)<5)
//        {
//            strcpy(nombre[i],ori_nombre);
//        }
//        else
//        {
//            strcpy(nombre[i],"error");
//        }
//
//
//        printf("ingrese apellido:");
//        gets(ori_apelli);
//
//        if(strlen(ori_apelli)<5)
//        {
//            strcpy(apellido[i],ori_apelli);
//        }
//        else
//        {
//            strcpy(apellido[i],"error");
//        }
//
//
//        printf("ingrese sexo:");
//        gets(ori_sexo);
//        if(strlen(ori_sexo)<5)
//        {
//            strcpy(sexo[i],ori_sexo);
//        }
//        else
//        {
//            strcpy(sexo[i],"error");
//        }
//
//
//
//        printf("ingrese nota:");
//        scanf("%d",&ori_notas);
//        if(ori_notas>=0)
//        {
//            notas[i]=ori_notas;
//        }
//
//
//        printf("ingrese legajo:");
//        scanf("%d",&ori_legajo);
//        if(ori_legajo>0)
//        {
//            legajo[i]=ori_legajo;
//        }
//    }
//    for(i=0;i<cant_nom;i++)
//    {
//        printf("\n\n");
//
//
//        puts(nombre[i]);
//        puts(apellido[i]);
//        puts(sexo[i]);
//        if(notas[i]>=0)
//            printf("%d\n",notas[i]);
//        else
//            printf("error\n");
//        if(legajo[i]>=0)
//            printf("%d\n",legajo[i]);
//        else
//            printf("error\n");
//
//    }
//
//
//    for(i=0;i<cant_nom-1;i++)
//    {
//        for(j=i+1;j<cant_nom;j++)
//        {
//            if(notas[i]<notas[j])
//            {
//                aux=notas[i];
//                notas[i]=notas[j];
//                notas[j]=aux;
//
//                aux=legajo[i];
//                legajo[i]=legajo[j];
//                legajo[j]=aux;
//
//                strcpy(aux_string,nombre[i]);
//                strcpy(nombre[i],nombre[j]);
//                strcpy(nombre[j],aux_string);
//
//                strcpy(aux_string,apellido[i]);
//                strcpy(apellido[i],apellido[j]);
//                strcpy(apellido[j],aux_string);
//
//                strcpy(aux_string,sexo[i]);
//                strcpy(sexo[i],sexo[j]);
//                strcpy(sexo[j],aux_string);
//
//
//            }
//
//        }
//    }
//
//    for(i=0;i<cant_nom;i++)
//    {
//        strlwr(nombre[i]);
//        charaux=nombre[i][0];
//        nombre[i][0]=tolouper(charaux);
//    }
//
//    for(i=0;i<cant_nom;i++)
//    {
//        printf("\n\n");
//        puts(nombre[i]);
//        puts(apellido[i]);
//        puts(sexo[i]);
//        if(notas[i]>=0)
//            printf("%d\n",notas[i]);
//        else
//            printf("error\n");
//        if(legajo[i]>=0)
//            printf("%d\n",legajo[i]);
//        else
//            printf("error\n");
//
//    }
//
//    return 0;
//}
//int obtenerdato(char mensaje[],char mensaje_error[],int min,int max,char buffer[]);
//
//int main()
//{
//    char buffermain[1000];
//    char nombre[2][10];
//    if(obtenerdato("ingrese su nombre","error",0,10,buffermain))
//    {
//        strcpy(nombre[1],buffermain);
//    }
//    else
//    {
//        strcpy(nombre[1],"ERRRRROR");
//    }
//    printf("%s",nombre[1]);
//return 0;
//}
///**funcion*/
///**en esta funcion usamos pasaje por referencia*/
//
//
//
//int obtenerdato(char mensaje[],char mensaje_error[],int min,int max,char buffer[])
//{
//    int flag=0;
//    puts(mensaje);
//    gets(buffer);
//
//    if(strlen(buffer)<max&&strlen(buffer)>min)
//    {
//        flag= 1;
//    }
//    else
//    {
//        printf("%S\n",mensaje_error);
//
//    }
//    return flag;
//
//}
///**pasar matriz*/
//int ordenar(char nombre[][50],char apellido [][50],int tamano)
//{
//    int i;
//    int j;
//    char auxstrin[50];
//
//    for(i=0;i<tamano-1;i++)
//    {
//        for(j=i+1;i<tamano;j++)
//        {
//            if(strcmp(apellido[i],apellido[j])>0)
//            {
//                suapstr(apellido[i],apellido[j]);
//            }
//        }
//    }
//}
//
//void suapstr(char aux1[],char aux2[])
//{
//    char aux[400];
//    strcpy(aux,aux1);
//    strcpy(aux1,aux2);
//
//    strcpy(aux2,aux);
//
//}
/*****************************************************************/
/**clase lunes mañana*//**ordenamiento por 1 y 2 criterios*/
//#define cant 4
//int main()
//{
//    int i;
//    int j;
//    char nombre[cant][30];
//    char auxchar[30];
//    char auxcharsex[10];
//    char sexo[cant][10];
//    char charaux;
//
//    for(i=0;i<cant;i++)
//    {
//        printf("ingrese nombre:");
//        fflush(stdin);
//        gets(nombre[i]);
//        printf("ingrese sexo:");
//        fflush(stdin);
//        gets(sexo[i]);
//    }
//
//
//    for(i=0;i<cant;i++)
//    {
//        strlwr(nombre[i]);
//        charaux=nombre[i][0];
//        nombre[i][0]=toupper(charaux);
//    }
//
//
//    for(i=0;i<cant-1;i++)
//    {
//        for(j=i+1;j<cant;j++)
//        {
//            if(strcmp(sexo[i],sexo[j])<0)
//            {
//                strcpy(auxchar,nombre[i]);
//                strcpy(nombre[i],nombre[j]);
//                strcpy(nombre[j],auxchar);
//
//                  strcpy(auxcharsex,sexo[i]);
//                strcpy(sexo[i],sexo[j]);
//                strcpy(sexo[j],auxcharsex);
//
//            }
//            else
//            {
//                   if(strcmp(sexo[i],sexo[j])==0)
//                    {
//                        if(strcmp(nombre[i],nombre[j])>0)
//                        {
//                        strcpy(auxchar,nombre[i]);
//                        strcpy(nombre[i],nombre[j]);
//                        strcpy(nombre[j],auxchar);
//                        }
//                    }
//            }
//
//
//
//
//
//
//        }
//    }
//
//
//    for(i=0;i<cant;i++)
//    {
//        printf(" nombre:%10s sexo%10s\n",nombre[i],sexo[i]);
//
//    }
//    return 0;
//}
/**************/
/**structura*/

//typedef struct
//{
//    char nombre[16];
//    char apellido[20];
//    char sexo;
//    float altura;
//    int edad;
//
//}e_persona;
//
//
//int main()
//{
//   e_persona una_persona;
//
//   printf("ingrese nombre:");
//   fflush(stdin);
//   gets(una_persona.nombre);
//
//   printf("\ningrese apellido:");
//   fflush(stdin);
//   gets(una_persona.apellido);
//
//   printf("\ningrese sexo: ");
//   fflush(stdin);
//   una_persona.sexo=getchar();
//
//   printf("\ningrese edad");
//
//   scanf("%d",&una_persona.edad);
//
//   printf("\ningrese altura");
//
//   scanf("%f",&una_persona.altura);
//
//
//   printf("%s\n%s\n%c\n%f\n%d\n",una_persona.nombre,una_persona.apellido,una_persona.sexo,una_persona.altura,una_persona.edad);
//   return 0;
//}
/******************************************/
/***clase jueves*/
#include <string.h>
#define p printf
#define cant 4
#include "UTN.h"

typedef struct
{
    int dest_anio;/*noid*/
    int dest_mes;/*noid*/
    int dest_dia;/*noid*/
}e_fecha;

typedef struct
{
    char dest_nombre[50];/*noid*/
    e_fecha fechanacimiento;/*noid*/
    int id_nacionalidad;/***/
    char id_estado;/***/
    int id_director;/***/
}e_director;

typedef struct
{
    int id_nacionalidad;/***/
    char dest_titulo[50];/*noid*/
    int dest_anio;
    int id_director;
    int id_pelicula;/***/
    char id_estado;/***/

}e_video;

typedef struct
{
    int id_director;/***/
    int id_pelicula;/***/
}e_relacion;


typedef struct
{
    int id_nacionalidad;/***/
    char dest_pais[50];/*noid*/
    char id_estado;/***/
}e_nacion;


//void inicializar_array_general(e_video vector_vi[],e_nacion vector_na[],e_director vector_dire[],char estado[],int tamano_vector);
void mostrardirector(e_director vector_direc[],int tamanio,e_nacion vec_na[],e_video vec_pe[]);
void imprimir_nacio_direc(int id_nac,e_nacion vec[]);
void obtener_pais(char guardar_pais[],int id,e_nacion vector_nac[],int tam);
int obtener_id_peli(e_video vec[],int tam,int valor);
int buscar_en_el_array_nacion(e_nacion vector_nacion[],int tam,char estado);//
int buscar_en_el_array_pelicula(e_video vector_pelicula[],int tam,char estado);//
int buscar_en_el_array_director(e_director vector_director[],int tam,char estado);
void imprimir_lista_pais(e_nacion vectorpais[],int tam);
void imprimir_nacion_direc(e_director vectordirectores[],int tam);
int recorre_estado_director(e_director vector_estado[]);
int recorre_estado_pelicula(e_video vector_estado[]);




int main()
{
    int indice_de_busqueda;
    int cant_directores;

    /**lista*/
    e_nacion vector_naciones[200];
    e_director vector_directores[500];
    /*******/
    //e_director datos_directores[10];

    e_video vector_pelicula[1000];
    e_relacion vector_relacion[1000];

    char orige_id_peli[50];
    char orige_titulo[50];
    char orige_anio[50];
    char orige_nacion[50];
    char orige_director[50];
    char orige_nombre_director[50];
    char orige_fecha_nacimiento[50];
    char orige_opcion_pais[50];

    char opcion_pais;

    int id_pelicula;

    int atoi_anio;
    int atoianio;
    int atoi_id_peli;

    int buscar_est_empty;
    int buscar_est_empty_video;

    int modificar_id_peli;


    int atoi_id_pais;
    char orige_opcion_director[10];
    int atoi_id_director;

    int i;
    int opcion=0;



    e_director direc1={"clunin_A",{12,13,73},1/*idnacio*/,'F',1/*iddirec*/};
    e_director direc2={"clunin_B",{11,13,74},2/*idnacio*/,'F',2/*iddirec*/};
    e_director direc3={"clunin_C",{10,13,75},3/*idnacio*/,'F',3/*iddirec*/};
    e_director direc4={"clunin_D",{9,13,76},4/*idnacio*/,'F',4/*iddirec*/};
    e_director direc5={"clunin_E",{12,13,73},5/*idnacio*/,'F',5/*iddirec*/};
    e_director direc6={"clunin_F",{11,13,74},6/*idnacio*/,'F',6/*iddirec*/};
    e_director direc7={"clunin_G",{10,13,75},7/*idnacio*/,'F',7/*iddirec*/};
    e_director direc8={"clunin_H",{9,13,76},8/*idnacio*/,'F',8/*iddirec*/};
    e_director direc9={"clunin_i",{10,13,75},9/*idnacio*/,'F',9/*iddirec*/};
    e_director direc10={"clunin_j",{9,13,76},10/*idnacio*/,'F',10/*iddirec*/};



    e_nacion nac1={1/*idnacio*/,"argentina",'F'};
    e_nacion nac2={2/*idnacio*/,"brasil",'F'};
    e_nacion nac3={3/*idnacio*/,"cuba",'F'};
    e_nacion nac4={4/*idnacio*/,"mexico",'F'};
    e_nacion nac5={5/*idnacio*/,"irak",'F'};
    e_nacion nac6={6/*idnacio*/,"israel",'F'};
    e_nacion nac7={7/*idnacio*/,"rusia",'F'};
    e_nacion nac8={8/*idnacio*/,"china",'F'};
    e_nacion nac9={9/*idnacio*/,"uruguay",'F'};
    e_nacion nac10={10/*idnacio*/,"japon",'F'};



/******************************************************/



//    vector_pelicula[0].id_pelicula=1;
//    vector_pelicula[1].id_pelicula=2;
//    vector_pelicula[2].id_pelicula=3;
//    vector_pelicula[3].id_pelicula=4;
//    vector_pelicula[4].id_pelicula=5;
//    vector_pelicula[5].id_pelicula=6;
//    vector_pelicula[6].id_pelicula=7;
//    vector_pelicula[7].id_pelicula=8;
//    vector_pelicula[8].id_pelicula=9;
//    vector_pelicula[9].id_pelicula=10;

/***********************************************/
    vector_directores[0]=direc1;
    vector_directores[1]=direc2;
    vector_directores[2]=direc3;
    vector_directores[3]=direc4;
    vector_directores[4]=direc5;
    vector_directores[5]=direc6;
    vector_directores[6]=direc7;
    vector_directores[7]=direc8;
    vector_directores[8]=direc9;
    vector_directores[9]=direc10;




    vector_naciones[0]=nac1;
    vector_naciones[1]=nac2;
    vector_naciones[2]=nac3;
    vector_naciones[3]=nac4;
    vector_naciones[4]=nac5;
    vector_naciones[5]=nac6;
    vector_naciones[6]=nac7;
    vector_naciones[7]=nac8;
    vector_naciones[8]=nac9;
    vector_naciones[9]=nac10;


    inicializar_array_pelicula(vector_pelicula,'E',10);

    do
    {
        opcion=menu_generico("\n1-alta\n2-baja\n3baja pelicula-\n4-nuevo director\n5-eliminar director\n6-informar\n7-mostrar\n",1,7);

        switch(opcion)
        {
        case 1:
            id_pelicula=recorre_estado_pelicula(vector_pelicula);
            buscar_est_empty=buscar_en_el_array_pelicula(vector_pelicula,10,'E');
            vector_pelicula[buscar_est_empty].id_pelicula=id_pelicula+1;



            if(buscar_est_empty==-1)
            {
                printf("no hay lugar\n");
                break;
            }
            if(!get_string_letras("ingrese el titulo",orige_titulo))
            {
                printf("ingrese el titulo con letras\n");
                break;
            }
            if(!get_string_numero("ingrese el anio",orige_anio))
            {
                printf("ingrese el anio con numeros\n");
                break;
            }

            atoi_anio=atoi(orige_anio);




            imprimir_lista_pais(vector_naciones,10);
            printf("se encuentra el pais en la lista ingrese si:<s>/no:<n>\n\n");
            fflush(stdin);
            opcion_pais=getchar();
            if(opcion_pais=='s')
            {
                if(!get_string_numero("ingrese la opcion del pais",orige_opcion_pais))
                {
                    break;
                }

                atoi_id_pais=atoi(orige_opcion_pais);
            }
            else
            {
                buscar_en_el_array_nacion(vector_naciones,10,'E');
            }


            vector_pelicula[buscar_est_empty].id_nacionalidad=atoi_id_pais;







            printf("ingrese la cantidad de directores que hicieron la pelicula");
            scanf("%d",&cant_directores);
            for(i=0;i<cant_directores;i++)
            {
                imprimir_nacion_direc(vector_directores,10);
                printf("se encuentra el director en la lista <s>/<n>\n");
                fflush(stdin);
                opcion_pais=getchar();
                if(opcion_pais=='s')
                {
                    if(!get_string_numero("ingrese la opcion de directores",orige_opcion_director))
                    {
                    break;
                    }
                        atoi_id_director=atoi(orige_opcion_director);
                }
                else
                {



                    ///
                    id_pelicula=recorre_estado_director(vector_directores);
                    indice_de_busqueda=buscar_en_el_array_director(vector_directores,500,'E');
                    vector_directores[indice_de_busqueda].id_director=id_pelicula+1;
                    printf("%d\n",id_pelicula);
                    if(!get_string_letras("ingrese nombre del director",orige_nombre_director))
                    {
                        break;
                    }
                    if(!get_string_numero("ingrese fecha de nacimiento",orige_fecha_nacimiento))
                    {
                        break;
                    }
                    imprimir_lista_pais(vector_naciones,10);
                    if(!get_string_numero("ingrese la opcion de pais",orige_opcion_pais))
                    {
                        break;
                    }
                    atoi_id_director=indice_de_busqueda;
                }


                vector_relacion[i].id_director=atoi_id_director;
                vector_relacion[i].id_pelicula=vector_pelicula[buscar_est_empty].id_pelicula;

            }



            vector_pelicula[buscar_est_empty].id_director=atoi_id_director;

            strcpy(vector_pelicula[buscar_est_empty].dest_titulo,orige_titulo);
            vector_pelicula[buscar_est_empty].dest_anio=atoi_anio;

            printf("\ndar de alta pelicula\n");



            break;


        case 2:
            printf("\nMODIFICAR\n");
            if(!get_string_numero("ingrese identificador de la pelicula para modificar",orige_id_peli))
            {
                break;
            }
            atoi_id_peli=atoi(orige_id_peli);


            modificar_id_peli=obtener_id_peli(vector_pelicula,8,atoi_id_peli);

            printf("\nSE PUEDE MODIFICAR\n");

            if(!get_string_letras("ingrese el nuevo titulo",orige_titulo))
            {
                break;
            }
            if(!get_string_numero("ingrese el nuevo anio",orige_anio))
            {
                break;
            }
            atoianio=atoi(orige_anio);
            if(!get_string_letras("ingrese la nueva nacion",orige_nacion))
            {
                break;
            }
            if(!get_string_letras("ingrese el nuevo director",orige_director))
            {
                break;
            }
            strcpy(vector_directores[modificar_id_peli].dest_nombre,orige_director);
            vector_pelicula[modificar_id_peli].dest_anio=atoianio;
            strcpy(vector_pelicula[modificar_id_peli].dest_titulo,orige_titulo);
            strcpy(vector_pelicula[modificar_id_peli].id_estado,orige_nacion);


            break;



        case 3:



            break;


        case 4:



            break;


        case 5:


            break;


        case 6:


            break;


        case 7:
            mostrardirector(vector_directores,1,vector_naciones,vector_pelicula);
            break;

         default:

            break;
        }


    }while(opcion!=8);

    return 0;
}


void mostrardirector(e_director vector_direc[],int tamanio,e_nacion vec_na[],e_video vec_pe[])
{
    int i;
    int id_nac;
        for(i=0;i<tamanio;i++)
        {
            printf("%s\n",vec_pe[i].dest_titulo);
            printf("%s\n",vector_direc[i].dest_nombre);
            id_nac=vector_direc[i].id_nacionalidad;
            imprimir_nacio_direc(id_nac,vec_na);
        }


}

void imprimir_nacio_direc(int id_nac,e_nacion vec[])
{

    char aux[50];

    obtener_pais(aux,id_nac,vec,4);
    puts(aux);
}

void obtener_pais(char guardar_pais[],int id,e_nacion vector_nac[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(vector_nac[i].id_nacionalidad== id)
        {
            strcpy(guardar_pais,vector_nac[i].dest_pais);
        }
    }
}


void inicializar_array_pelicula(e_video vector_pelicula[],char estado,int tamano_vector)
{
    int i;

    for(i=0;i<tamano_vector;i++)
    {
        vector_pelicula[i].id_estado=estado;
    }
}
/**************************************************************/
/**************************************************************/
/**************************************************************/
/*******LOS BUSCADORES*****************/


int buscar_en_el_array_nacion(e_nacion vector_nacion[],int tam,char estado)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(vector_nacion[i].id_estado==estado)
        {
            return i;//empty
        }
    }

    return -1;//full
}

int buscar_en_el_array_pelicula(e_video vector_pelicula[],int tam,char estado)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(vector_pelicula[i].id_estado==estado)
        {
            vector_pelicula[i].id_estado='F';

            return i;//empty
        }
    }

    return -1;//full
}

int buscar_en_el_array_director(e_director vector_director[],int tam,char estado)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(vector_director[i].id_estado==estado)
        {
            return i;//empty
        }
    }

    return -1;//full
}


/**************************************************************/
int obtener_id_peli(e_video vec[],int tam,int valor)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(vec[i].id_pelicula==valor)
        {
            return i;
        }
    }

    return -1;
}
/********************************************************************/
/********************************************************************/
/********************************************************************/
/********************************************************************/



void imprimir_lista_pais(e_nacion vectorpais[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%s\n",vectorpais[i].dest_pais);
    }
    //printf("\n1-argentina\n2-brasil\n3-cuba\n4-mexico\n5-irak\n6-israel\n7-rusia\n8-china\n9-uruguay\n10-japon\n");
}

void imprimir_nacion_direc(e_director vectordirectores[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%s\n",vectordirectores[i].dest_nombre);
    }
    //printf("\n1-clunin_A\n2-clunin_B\n3-clunin_C\n4-clunin_D\n5-clunin_E\n6-clunin_F\n7-clunin_G\n8-clunin_H\n9-clunin_i\n10-clunin_j\n");
}



int recorre_estado_director(e_director vector_estado[])
{
    int i;
    size_t largo;
    int vector[largo];
    int contador_estado_F=0;
    int cont_indice=0;
    int mayor=0;

    for(i=0;i<500;i++)
    {
        if(vector_estado[i].id_estado=='F')
        {
            contador_estado_F++;
        }
        else
        {
            if(vector_estado[i].id_estado=='E')
            {
                break;
            }


        }
    }

    largo=contador_estado_F;
    for(i=0;i<500;i++)
    {
        if(vector_estado[i].id_estado=='F')
        {

            vector[cont_indice]=vector_estado[i].id_director;
            cont_indice++;
        }
        else
        {
            if(vector_estado[i].id_estado=='E')
            {
                break;
            }
        }
    }

    for(i=0;i<largo;i++)
    {
        if(vector[i]>mayor)
        {
            mayor=vector[i];
        }
    }

    return mayor;
}




int recorre_estado_pelicula(e_video vector_estado[])
{
    int i;
    size_t largo=0;
    int vector[largo];
    int contador_estado_F=0;
    int cont_indice=0;
    int mayor=0;

    for(i=0;i<500;i++)
    {
        if(vector_estado[i].id_estado=='F')
        {
            contador_estado_F++;
        }
        else
        {
            if(vector_estado[i].id_estado=='E')
                break;
        }


    }

    largo=contador_estado_F;


    for(i=0;i<500;i++)
    {
        if(vector_estado[i].id_estado=='F')
        {

            vector[cont_indice]=vector_estado[i].id_pelicula;
            cont_indice++;
        }
        else
        {
            if(vector_estado[i].id_estado=='E')
                break;
        }
    }

    for(i=0;i<largo;i++)
    {
        if(vector[i]>mayor)
        {
            mayor=vector[i];
        }
    }

    return mayor;
}

