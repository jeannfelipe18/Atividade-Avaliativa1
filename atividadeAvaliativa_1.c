#include <stdio.h>

int main() {
    double x;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    double numerador =  5 * x + 3;

    double denominador = x * x - 16;

    if (denominador == 0) {
        printf("Divisão por zero não é permitida.\n");
    } else {
        
        double resultado = numerador / denominador;

        printf("f(x) = %.2lf\n", resultado);
    }
}