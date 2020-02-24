#include <stdio.h>


int main(){
    int numeroFinal;
    printf("Numero final (empezando de 1):");
    scanf("%d", &numeroFinal);
    for(int i = 1; i <=10; i++){
        for(int j = 1; j<=numeroFinal; j++){
            int resultado;
            resultado = i*j;
            printf(" %d X %d = %d,", j, i, resultado);
        }
        printf("\n");
    }
}