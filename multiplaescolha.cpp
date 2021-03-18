#include <stdio.h>

int main()
{
  float num1, num2;
  int op;
  printf("Digite os dois números reais: "); scanf("%f %f", &num1, &num2);
  printf("Escolha qual operação deseja fazer: \n[1] somar \n[2] subtrair \n[3] multiplicar \n[4] dividir\n");
  scanf("%d", &op);

  switch (op)
  {
    case 1:
      printf("\n%.2f\n", (num1 + num2));
      break;
    case 2:
      printf("\n%.2f\n", (num1 - num2));
      break;
    case 3:
      printf("\n%.2f\n", (num1 * num2));
      break;
    case 4:
      printf("\n%.2f\n", (num1 / num2));
      break;
    default:
      printf("\nOperação inválida\n");
      break;
  }

  return 0;
}
