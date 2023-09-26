#include <stdio.h>

main() {
    float A, B, C;

    
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if (A + B > C && A + C > B && B + C > A) {
        
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("Triângulo Retângulo\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Esses valores não podem formar um triângulo.\n");
    }

    return 0;
}
