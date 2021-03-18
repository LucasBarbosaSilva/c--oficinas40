/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Digite um número: ");
    int numero, resultado;
    
    scanf("%d", &numero); //O & passa o endereço de memória da variável número
    
    resultado = numero * numero;
    printf("\nOnúmero %d corresponde ao quadrado de %d", resultado, numero);
    
    resultado = resultado * numero;
    
    printf("\nO número %d corresponde ao cubo de %d", resultado, numero);
    
    
    return 0;
}

