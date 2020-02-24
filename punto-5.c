#include <stdio.h>
#include <math.h>


float calcularSerie(int x, int n);

int factorial(int n);

int main(){
    int x;
    int t;
    printf("Valor de entrada de x: ");
    scanf("%d",&x);
    printf("Numero de terminos: ");
    scanf("%d",&t);
    float serie = calcularSerie(x,t);
    printf("%f\n", serie);
} 

float calcularSerie(int x, int t){
    int signo = 1;
    int exp = 0;
    float resultado = pow(x,exp)/(factorial(exp));
    for(int i = 1; i<t; i++){
        exp+=2;
        float fact = (float) factorial(exp);
        float exponente = (float) pow(x,exp);
        if(signo == 1){
            resultado = resultado - exponente/fact; 
            signo = 0;
        }else{
            resultado = resultado + exponente/fact;
            signo = 1;
        }
    }
    return resultado;
}

int factorial(int n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}