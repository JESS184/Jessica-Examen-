#include <stdio.h>

 int main ()
{
     /* Jessica Aguilar 
    examen segundo parcial */

    float Fresa, cincokg, $13, precio;
    printf("\n\n Jessica Aguilar");
    printf ( "\n\n comprando fruta");
    printf ( "\n\n precio de cualquier fruta $13");
    printf ( "\n\n ingrese la fruta que selecciono");
    scanf ( "%f", &Fresa);
    printf ( "\n\n ingrese el peso de la futa seleccionada");
    scanf ( "%f", &cincokg);
    precio = cincokg * $13;
    printf ( "\n\n el precio total es %f", precio);
    return 0;

}
