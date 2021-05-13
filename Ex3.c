#include <stdio.h>

int main ()
{

    float fresa, peso, $13, precio;
    printf("\n\n Calderón Vazquez Adolfo Ángel");
    printf("\n\n comprando fruta");
    printf("\n\n precio de cualquier fruta $13");
    printf("\n\n ingrese la fruta que selecciono");
    scanf("%f", &fresa);
    printf("\n\n ingrese el peso en kg de la fruta seleccionada");
    scanf("%f", &peso);
    precio = 13 * peso;
    printf("\n El precio es %f", precio);
    return 0;
}