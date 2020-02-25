#include <stdio.h>

float obtenerComision(int venta); /* prototipo de funcion */

int main() {
    int x;
    float comision;
    printf("Introduzca el valor de la venta: ");
    scanf("%d", &x);
    comision = obtenerComision(x); /* llamada a la funcion */
    printf("Su comision es de %f\n", comision);
    return 0;
}

float obtenerComision(int venta){
    float comision;

    if(venta >= 0 && venta <= 20000){
        comision =  venta * 0.05;
    }
    if(venta >= 20001 && venta <= 50000){
        comision =  (venta * 0.07) + 1000;
    }

    if(venta >= 50001){
        comision =  (venta * 0.1) + 3100;
    }
    return comision;
}