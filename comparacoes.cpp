#include <stdio.h>;

int main ()
{
  int A, B, C;
  printf("Digite os números:"); scanf("%d %d %d", &A, &B, &C);

  printf("%d é maior que %d: %d", A, B, A>B);
  printf("\n%d é menor ou igual a %d: %d", A, C, A<=C);
  printf("\n%d é igual a %d e %d é maior que %d: %d", A, B, A, C, (A == B) && (A > C));
  printf("\n%d é menor ou igual a %d e %d é maior ou igual a %d: %d", A, B, A, C, (A <= B) || (A >= C)); 
}