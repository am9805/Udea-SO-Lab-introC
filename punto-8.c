#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>

int generar_multiplos_aleatorios();
int multiplicacion(int a, int b);
int validarResultado(int resultadoU, int realResultado, int opcion);

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
      int opcion = generar_multiplos_aleatorios(2, 4);
      printf("Cuanto es %d veces %d\n", a, b);
      scanf("%d", &userResult);
      esCorrecto = validarResultado(userResult, resultadoReal, opcion);
      
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
  }
  return num;
}

int multiplicacion(int a, int b)
{
  int result;
  result = a * b;
  return result;
}

int validarResultado(int resultadoU, int realResultado, int opcion)
{
  int codigo;
  if (resultadoU == realResultado)
  {
    switch (opcion)
    {
    case 1:
      printf("Muy bien!\n");
      break;
    case 2:
      printf("Excelente!\n");
      break;
    case 3:
      printf("Buen trabajo!\n");
      break;
    case 4:
      printf("Sigue haciéndolo bien!\n");
      break;
    default:
      break;
    }
    codigo = 1;
    
  }
  else
  {
    switch (opcion)
    {
    case 1:
      printf("No. Por favor trata de nuevo.\n");
      break;
    case 2:
      printf("Incorrecto. Trata una vez más.\n");
      break;
    case 3:
      printf("No te rindas!\n");
      break;
    case 4:
      printf("No. Trata de nuevo\nclear");
      break;
    default:
      break;
    }
    codigo = 0;
    
  }

  return codigo;
}

