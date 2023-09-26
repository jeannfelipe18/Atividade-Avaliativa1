#include <stdio.h>

main() {
    float salario;
    int num_filhos;
    float salario_total = 0;
    int num_pessoas = 0;
    int num_filhos_total = 0;
    float maior_salario = -1.0; 
    int num_pessoas_salario_ate_100 = 0;

    do {
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario >= 0) {
            printf("Digite o número de filhos: ");
            scanf("%d", &num_filhos);

            num_pessoas++;
            salario_total += salario;

            if (salario > maior_salario) {
                maior_salario = salario;
            }

            num_filhos_total += num_filhos;

            if (salario <= 100) {
                num_pessoas_salario_ate_100++;
            }
        }
    } while (salario >= 0);

    if (num_pessoas > 0) {
        float media_salario = salario_total / num_pessoas;
        float media_filhos = (float)num_filhos_total / num_pessoas;
        float percentual_salario_ate_100 = (float)num_pessoas_salario_ate_100 / num_pessoas * 100;

        printf("Média do salário da população: %.2f\n", media_salario);
        printf("Média do número de filhos: %.2f\n", media_filhos);
        printf("Maior salário: %.2f\n", maior_salario);
        printf("Percentual de pessoas com salário até R$100.00: %.2f%%\n", percentual_salario_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

}
