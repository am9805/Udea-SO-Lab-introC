#include <stdio.h>

int esMultiplo(int a, int b);

int main(){
    int a;
    int b;
    printf("Ingrese un par de números a y b: ");
    scanf("%d %d",&a, &b);
    int resultado = esMultiplo(a,b);
    printf("%d", resultado);
} 

int esMultiplo(int a, int b){
    int multiplo = 0;
    if(b % a == 0){
        multiplo = 1;
    }
    return multiplo;
}