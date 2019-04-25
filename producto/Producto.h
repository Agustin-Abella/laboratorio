#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char nombre[50];
    char fechaVencimiento[50];
    char codigoBarra[13];
    char proveedor[50];
    float Precio;

}eProducto;

#endif // PRODUCTO_H_INCLUDED
