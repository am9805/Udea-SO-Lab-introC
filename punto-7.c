#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>

int generar_multiplos_aleatorios();
int multiplicacion(int a, int b);
int validarResultado(int resultadoU, int realResultado);

int main()
{ 
  srand(time(NULL)); //genera la semilla
  int ejecucion = 1;
  printf("Welcome :v.\n");
  printf("Escribe 1 para empezar, 0 para salir.\n");
  scanf("%d", &ejecucion);
  while (ejecucion == 1)
  {
    int esCorrecto = 1;
    int userResult;
    int a = generar_multiplos_aleatorios();
    int b = generar_multiplos_aleatorios();
    int resultadoReal = multiplicacion(a, b);
    while (esCorrecto == 1)
    {
      printf("Cuanto es %d veces %d\n", a, b);
      scanf("%d", &userResult);
      esCorrecto = validarResultado(userResult, resultadoReal);
    }
    printf("Escribe 1 para empezar, 0 para salir.\n");
    scanf("%d", &ejecucion);
  }
  exit(0);
  return 0;
}

int generar_multiplos_aleatorios()
{
  int cnt = 0, num, M, m;
  M = 10;
  m = 1;
  for (int i = 0; i < 2; i++)
  {
    num = rand() % (M - m + 1) + m;
    if (num % 2 == 0)
    {
      cnt++;
    }
    //printf("%d ", num);
  }
  return num;
}

int multiplicacion(int a, int b)
{
  int result;
  result = a * b;
  return result;
}

int validarResultado(int resultadoU, int realResultado)
{
  int codigo;
  if (resultadoU == realResultado)
  {
    printf("Muy bien!\n");
    codigo = 0;
  }
  else
  {
    printf("No. Por favor intenta nuevamente\n");
    codigo = 1;
  }

  return codigo;
}