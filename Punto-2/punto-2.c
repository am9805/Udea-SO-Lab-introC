#include <stdio.h>
#include <string.h>

void reverse(char [], int, int);
int main() {
    char espacios[50];
    int size;
    printf("Introduzca los espacios y oprima enter: ");
    scanf("%[^\n]", espacios);
    size = strlen(espacios);

   for(int i= 1; i <= size; i++){
        printf("\n");
        for(int j= i; j > 0; j--){
            if(j%2==0){
                printf("%d", 0);
            }else if(j%2==1){
                printf("%d", 1);
            }
        }        
    }
    
    return 0;
}
