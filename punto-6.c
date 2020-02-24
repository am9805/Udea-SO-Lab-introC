#include <stdio.h>
#include <string.h>

void reversarNumero(int yn);
char *strrev(char *str);

int main(){
    int n;
    printf("Digite el número a reversar: ");
    scanf("%d",&n);
    reversarNumero(n);
} 

void reversarNumero(int n){
    char str[100];
    sprintf(str, "%d", n);
    printf("El número reversado es: %s\n",strrev(str));
}

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}