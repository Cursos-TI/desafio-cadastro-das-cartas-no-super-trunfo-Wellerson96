#include <stdio.h>

int main(){

    char estado = 'A';
    char codigo[10] = "A01";
    char cidade[20] = "Ribeirão-Preto";
    int populacao = 698642;
    float area = 650.9;
    float pib = 55.484;
    int turismo = 39;

    // Variáveis cadastradas e valores inicializados.

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

    printf("Polução (Sem pontos ou vírgulas):\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);

        printf("Carta cadastrada com sucesso!!\n\n");

        printf("Informações da carta:\n");

        printf("Estado: %c\n", estado);
        printf("Código da carta: %s\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d mil habitantes\n", populacao);
        printf("Área: %.1f Km²\n", area);
        printf("PIB: R$ %.3f\n", pib);
        printf("Pontos turísticos: %d\n", turismo);


return 0;



}