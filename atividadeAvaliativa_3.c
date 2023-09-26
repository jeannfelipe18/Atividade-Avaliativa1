#include<stdio.h>

main(){

    float a, b, c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    if(a + b > c && b + c > a && a + c > b){
        if(a == b && b == c){
        printf("É um triangulo equilatero\n");
    } else if( a == b || b == c || a == c) {
        printf("É um triangulo isoceles.\n");
    } else {
        printf("É um triangulo escaleno.\n");
    } 
    }else {
        printf("Os valores não formam um triangulo\n");
    }
}