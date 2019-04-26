#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"


int inserteProducto(eProducto,eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarProducto(eProducto,eProducto[]);
//int mostrarArray(eProducto listado[],int tam);
void mostrarProducto(eProducto elParametroProducto);

int inserteProducto(eProducto elProducto,eProducto listado[])
{
    int indice;
    indice= dameLugarLibre(listado);
    if(indice!= -1)
    {
        listado[indice].estado=-1;
    }
    return indice;
}
int borrarProducto(eProducto elProducto,eProducto listado[])
{
    int indice;
    indice = existeProducto(elProducto,listado[indice]);
    if(indice !=-1)
    {
        listado[indice].estado =-1;
    }
}


void construirArray(int tam,eProducto[])
{
    int i;
    for(i=0;listado[i]=0;i++)
    {

    }
}

void cargarArray(int tam,eProducto listado[])
{
    int i;

    for (i=0;i <tam;i++)
    {
        listado[i]=pedirProducto();
    }
}

void mostrarArray(int tam,eProducto listado[])
{
    int i;

    for (i=0;i <tam;i++)
    {
        mostrarProducto(listado[i]);
    }
}

eProducto pedirProducto()

{

eProducto retorno;
printf("ingrese nombre del producto");
fflush(stdin);
scanf("%s",retorno.nombre);


printf("ingrese Proveedor del producto");
fflush(stdin);
scanf("%s",retorno.proveedor);


printf("ingrese el codigo de barra del producto");
fflush(stdin);
scanf("%s",retorno.codigoBarra);


printf("ingrese fecha de vencimiento  del producto");
fflush(stdin);
scanf("%s",retorno.fechaVencimiento);


printf("ingrese precio del producto");
fflush(stdin);
scanf("%f",&retorno.Precio);



return retorno;

}
void mostrarProducto(eProducto elParametroProducto)
{
    printf("\n \n \t \t <<<<productos>>>> \n");
    printf("\n Atributo \t valor");
    printf("\n ----------------------");
    printf("\ncodigo de barra:  \t%s\n",elParametroProducto.codigoBarra);
    printf("\nnombre: \t %s \n",elParametroProducto.nombre);
    printf("\nprovedor: \t %s\n",elParametroProducto.proveedor);
    printf("\nprecio: \t %f\n",elParametroProducto.Precio);
    printf("\nfecha vencimiento: \t %s \n",elParametroProducto.fechaVencimiento);
    printf("\n");
}
