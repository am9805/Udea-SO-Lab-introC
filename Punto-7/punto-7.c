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
    int esCorrecto = 0;
    int userResult;
    int a = generar_multiplos_aleatorios(2, 10);
    int b = generar_multiplos_aleatorios(2, 10);
    int resultadoReal = multiplicacion(a, b);
    while (esCorrecto == 0)
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

int generar_multiplos_aleatorios(int limite, int mayor)
{
  int cnt = 0, num, M, m;
  M = mayor;
  m = 1;
  for (int i = 0; i < limite; i++)
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
    codigo = 1;
  }
  else
  {
    printf("No. Por favor intenta nuevamente\n");
    codigo = 0;
  }

  return codigo;
}