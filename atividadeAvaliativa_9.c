#include<stdio.h>

main(){

    int votosCandidato1, votosCandidato2, votosCandidato3, votosCandidato4;
    int votosNulo, votosBranco;
    int voto;

    while(1){
    printf("Digite o numero do seu candidato de (1 a 4), 5 para voto nulo, 6 para voto branco ou 0 para encerrar:");
    scanf("%d", &voto);

    if (voto == 0) {
        break;  
    }

    switch (voto){
    
    case 1:
        votosCandidato1++;
        break;
    case 2:
        votosCandidato2++;
        break;
    case 3:
        votosCandidato3++;
        break;
    case 4:
        votosCandidato4++;
        break;
    case 5:
        votosNulo++;
        break;
    case 6:
        votosBranco++;
        break;
    default:
        printf("Codigo invalido.Por favor digite um codigo valido.\n");
        break;
    }
    }
    printf("Total de votos para para o candidato 1: %d\n", &votosCandidato1);
    printf("Total de votos para para o candidato 2: %d\n", &votosCandidato2);
    printf("Total de votos para para o candidato 3: %d\n", &votosCandidato3);
    printf("Total de votos para para o candidato 4: %d\n", &votosCandidato4);
    printf("Total de votos nulos: %d\n", &votosNulo);
    printf("Total de votos em branco: %d\n", &votosBranco);
}