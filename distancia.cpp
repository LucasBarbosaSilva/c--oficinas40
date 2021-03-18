#include <stdio.h>
#include <math.h>

int main ()
{
    printf("Digite as coordenadas do primeiro ponto: ");
    float xa, ya;
    scanf ("%f %f", &xa, &ya);  
    
    printf("Digite as coordenadas do segundo ponto: ");
    float xb, yb;
    scanf ("%f %f", &xb, &yb);  
    
    float resultado;
    resultado = sqrt(pow((xb - xa),2) + pow((yb - ya),2));
    
    printf("%f", resultado);
}