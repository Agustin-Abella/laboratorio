
typedef struct
{
    char nombre[50];
    char fechaVencimiento[50];
    char codigoBarra[13];
    char proveedor[50];
    float Precio;
    int estado;

}eProducto;


eProducto pedirProducto();
void mostrarProducto(eProducto);
void cargarArray(int,eProducto[]);
void mostrarArray(int,eProducto[]);


