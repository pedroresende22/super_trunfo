#include <stdio.h>

    int main () {

        char estado[2], estadoc2[2]; //representa um dos oito estados (escolher uma letra entre A e H)
        char codigo[3], codigoc2[3]; //a letra do estao seguida por um número entre 01 e 04
        char nome[50], nomec2[50]; //nome da cidade
        int populacao, populacaoc2; //número de habitantes da cidade
        int pontostur, pontosturc2; //número de pontos turísticos disponíveis na cidade
        float area, areac2; //a área da cidade em Km²
        float pib, pibc2; //produto interno bruto (PIB) da cidade


        printf("\nSUPER TRUNFO\n");


        // CARTA 1

        printf("CARTA 1\n");
        printf("Digite o estado (Escolha uma letra entre 'A' e 'H'): \n");
        scanf("%1s", estado);

        printf("Digite o código da cidade (Escolha um numero entre 01 e 04): \n");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nome);

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacao);

        printf("Digite a área da cidade: \n");
        scanf("%f", &area);

        printf("Digite o valor do Produto Interno Bruto (PIB) da cidade: \n");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos na cidade: \n");
        scanf("%d", &pontostur);


        // CARTA 2

        printf("\nCARTA 2\n");
        printf("Digite o estado (Escolha uma letra entre 'A' e 'H'): \n");
        scanf("%1s", estadoc2);

        printf("Digite o código da cidade (Escolha um numero entre 01 e 04): \n");
        scanf("%s", codigoc2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nomec2);

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacaoc2);

        printf("Digite a área da cidade: \n");
        scanf("%f", &areac2);

        printf("Digite o valor do Produto Interno Bruto (PIB) da cidade: \n");
        scanf("%f", &pibc2);

        printf("Digite o número de pontos turísticos na cidade: \n");
        scanf("%d", &pontosturc2);


        //RESULTADOS

        printf("\nCARTA 1\n");
        printf("Estado: %1s\n", estado);
        printf("Código: %s%s\n", estado, codigo);
        printf("Nome da cidade: %s\n", nome);
        printf("População: %d de habitantes\n", populacao);
        printf("Área: %.0f Km²\n", area);
        printf("PIB: R$%.0f\n", pib);
        printf("Pontos Turísticos: %d\n", pontostur);


        printf("\nCARTA 2\n");
        printf("Estado: %s\n", estadoc2);
        printf("Código: %s%s\n", estadoc2, codigoc2);
        printf("Nome da cidade: %s\n", nomec2);
        printf("População: %d de habitantes\n", populacaoc2);
        printf("Área: %.0f Km²\n", areac2);
        printf("PIB: R$%.0f\n", pibc2);
        printf("Pontos Turísticos: %d\n", pontosturc2);


        return 0;
    }
