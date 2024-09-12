#include <stdio.h>


int main() {

    //Váriaveis necessárias criadas e inicializadas (=).

    char estado = 'A';            //Estado designado por uma letra de A até H.
    char cidade[30] = "Campinas"; 
    int carta = 1;                //Numeração da carta.
    char codigo[10] = "A01";
    float populacao = 728.400;
    float area = 650.9;
    float pib = 19700000;
    int turismo = 2;
    float densidade = 8101.19;
    float PIB = 56749;
    float divisao1, divisao2;     //Váriavel para que possa ser feito o calculo da densidade e do PIB per capita.

    printf ("***Cadastro de cartas Super Trunfo***\n");

    printf ("Informe os dados da %dª carta:\n", carta); 

    printf ("Digite o estado:\n");
    scanf ("%c", &estado);

    printf ("Digite o código da carta:\n");
    scanf ("%s", &codigo);

    printf ("Digite o nome da cidade:\n");
    scanf (" %20[^\n]", &cidade);            //Especificador utilizado para que o compilador possa ler o espaço entre as palavras.

    printf ("Digite a população:\n");
    scanf ("%f", &populacao);

    printf ("DIgite a area:\n");
    scanf (" %f", &area);

    printf ("Digite o PIB:\n");
    scanf ("%f", &pib);

    printf ("Quantidade de pontos turísticos:\n");
    scanf ("%d", &turismo);

    printf ("\n");

    printf ("Carta cadastrada com sucesso!\n\n");  //Impressão das informações cadastradas.

    printf ("Informações da carta:\n\n Estado: %c\n Código: %s\n Cidade: %s\n Populacao: %.3f habitantes\n Área: %.1f Km²\n PIB: R$ %.1f\n Pontos Turisticos: %d\n" , estado, codigo, cidade, populacao, area, pib, turismo);

    divisao1 = (float) pib / populacao;  //Float foi utilizado para forçar (casting) o valor em ponto flutuante.    
    divisao2 = (float) populacao / area;

    printf ("PIB per capita: %.2f\n", divisao1);

    printf ("Densidade: %.1f\n", divisao2);



    

    return 0;
}
