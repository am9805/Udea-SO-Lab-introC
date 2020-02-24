#include <stdio.h>
#include <math.h>


int calcularProgresionGeometrica(int x, int n);

int main(){
    int x;
    int n;
    printf("Ingrese x: ");
    scanf("%d",&x);
    printf("Ingrese n: ");
    scanf("%d",&n);
    int progresion = calcularProgresionGeometrica(x,n);
    printf("%d\n", progresion);
} 

int calcularProgresionGeometrica(int x, int n){
    int resultado = 0;
    for(int i = 0; i<=n; i++){
        resultado = resultado + pow(x,i);
    }
    return resultado;
}