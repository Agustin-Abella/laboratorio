#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"
#define tam 5

int main()
{


    eProducto unProducto;
    unProducto=pedirProducto();
    mostrarProducto(unProducto);
    //definir array
    //cargar array
    //mostrar array

    construirArray(unProducto);
    return 0;
}
