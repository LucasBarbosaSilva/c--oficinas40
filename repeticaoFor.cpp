#include <stdio.h>

int main()
{
  int numA, numB, resultado;
  char op;
  
  int i;
  for (i=0; i<10; i++){
    printf("Repetição %d \n", (i + 1));
    printf("Digite o 1º número: "); scanf("%d", &numA);
    printf("Digite o 2º número: "); scanf("%d", &numB);
    
    resultado = numA + numB;
    
    printf("%d \n", resultado);
  }

  return 0;
}
