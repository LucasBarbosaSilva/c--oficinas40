#include <stdio.h>

int main()
{
  int num;
  printf("Digite o número: ");scanf("%d", &num);
  if (num % 5 == 0){
    printf("Esse número é divisivel por 5");
  }else{
    printf("Não é divisível por 5\n");
  }
  return 0;
}
