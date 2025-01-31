#include <stdio.h>

int main(){

    char estado = 'A';
    char codigo[10] = "A01";
    char cidade[20] = "Ribeirão-Preto";
    int populacao = 698642;
    float area = 650.9;
    double pib = 4209742708;
    int turismo = 39;
    float densidade;
    double PIB = (float) pib / populacao; // PIB per capita.

    // Variáveis cadastradas e valores inicializados.

    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populacao1;
    float area1;
    double pib1 = 4149388339;
    int turismo1;
    float densidade1;
    double PIB1 = (float) pib1 / populacao1; // PIB per capita.

    // Variáveis criadas para assumirem os respectivos valores da segunda carta.

    printf("***BEM VINDO AO JOGO SUPER TRUNFO TEMA PAÍSES!!***\n\n");

    printf("Nesse primeiro momento iremos realizar o cadastro das cartas com as seguintes informações:\n");
    printf("Estado. Caracterizado por uma letra de A a H.\nCódigo da carta. Contendo a letra do estado seguido de um numero de 01 a 04.\n");
    printf("Nome da cidade, população, área em Km², PIB e quantidade de pontos turísticos.\n\n");

    printf("Preparado? Vamos começar!!\n\n");

    printf("Por favor, digite os dados da 1ª carta:\n");

    printf("Digite a letra do estado:\n");
    scanf("%c", &estado);

    printf("Digite agora o código da carta:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("População (Sem pontos ou vírgulas):\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);

    printf("\n");

        densidade = (float) populacao / area; // Cast utilizado para forçar uma mudança da váriavel int para float.
        PIB = (float) pib / populacao; // PIB per capita.

        printf("Carta cadastrada com sucesso!!\n\n");

        printf("Informações da carta:\n");

        printf("Estado: %c\n", estado);
        printf("Código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d mil habitantes\n", populacao);
        printf("Área: %.1f Km²\n", area);
        printf("PIB: R$ %.1f\n", pib);
        printf("Pontos turísticos: %d\n", turismo);
        printf("Densidade populacional: %.2f habitantes por Km²\n", densidade);
        printf("PIB per capita: %.1f\n", PIB);

        printf("\n");

     printf("Por favor, digite os dados da 2ª carta:\n");

    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado1);

    printf("Digite agora o código da carta:\n");
    scanf("%s", &codigo1);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("População (Sem pontos ou vírgulas):\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &turismo1);

    printf("\n");

        densidade1 = (float) populacao1 / area1; // Cast utilizado para forçar uma mudança da váriavel int para float.
        PIB1 = (float) pib1 / populacao1; // PIB per capita.

        printf("Carta cadastrada com sucesso!!\n\n");

        printf("Informações da carta:\n");

        printf("Estado: %c\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d mil habitantes\n", populacao1);
        printf("Área: %.1f Km²\n", area1);
        printf("PIB: R$ %.1f\n", pib1);
        printf("Pontos turísticos: %d\n", turismo1);
        printf("Densidade populacional: %.2f habitantes por Km²\n", densidade1);
        printf("PIB per capita: %.1f\n", PIB1);

return 0;



}