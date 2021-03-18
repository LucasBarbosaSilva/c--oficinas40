#include <stdio.h>

int main()
{
  int numA, numB, resultado;
  char op;

  do{
    printf("Digite o 1º número: "); scanf("%d", &numA);
    printf("Digite o 2º número: "); scanf("%d", &numB);
    
    resultado = numA + numB;
    
    printf("%d \n", resultado);
    getchar();
    printf("Deseja continuar? [s/n]"); scanf("%c", &op);

  }while (op == 's');
  

  return 0;
}
