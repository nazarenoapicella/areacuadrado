#include <stdio.h>

int main() {
    float lado, area;

    // Solicitar al usuario que ingrese la longitud del lado del cuadrado
    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &lado);

    // Calcular el área del cuadrado
    area = lado * lado;

  
    printf("El área del cuadrado con lado %.2f es: %.2f\n", lado, area);

    return 0;
}

