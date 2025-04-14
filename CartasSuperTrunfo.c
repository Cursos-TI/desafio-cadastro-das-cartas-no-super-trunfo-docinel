#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaração das Variáveis
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[2]; // {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', '\0'};
    char CodigoCarta[4]; // {'A01', 'B02', 'C03', 'D04', 'E05', 'F06', 'G07', 'H08', '\0'};
    int populacao, PontoTuristico;
    float area, PIB;
    printf("############## DESAFIO SUPER TRUNFO ##############\n\n");
    printf("############## CADASTRO DE CARTAS ################\n");

    //Entrada de Dados da Carta A
    printf("\nOs nomes dos estados devem estar entre as letras 'A até H'\n");
    printf("\nDigite o nome do Estado: ");
    scanf("%1s", estado);

    printf("\nOs códigos dos estados devem estar conforme o exemplo: \n 'A01, B02, C03... H08'\n");
    printf("\nDigite o código do Carta: ");
    scanf("%3s", CodigoCarta);

    printf("Digite a população do Estado: ");
    scanf("%d", &populacao);

    printf("Digite a area do Estado: ");
    scanf("%f", &area);

    printf("Digite o PIB do Estado: ");
    scanf("%f", &PIB);

    printf("Há quantos pontos turísticos no Estado: ");
    scanf("%d", &PontoTuristico);

    //Saída dos Dados da Carta A
    printf("\n==================================================\n");
    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", CodigoCarta);
    printf("\nPopulação: %d", populacao);
    printf("\nArea: %.2f km²", area);
    printf("\nNúmero de pontos turísticos: %d", PontoTuristico);
    printf("\nPIB: %.2f", PIB);
    printf("\n==================================================\n");

    //Entrada de Dados da Carta B
    printf("\nOs nomes dos estados devem estar entre as letras 'A até H'\n");
    printf("\nDigite o nome do Estado: ");
    scanf("%1s", estado);
    printf("\nOs códigos dos estados devem estar conforme o exemplo: \n 'A01, B02, C03... H08'\n");
    printf("\nDigite o código do Carta: ");
    scanf("%3s", CodigoCarta);
    printf("Digite a população do Estado: ");
    scanf("%d", &populacao);
    printf("Digite a area do Estado: ");
    scanf("%f", &area);
    printf("Digite o PIB do Estado: ");
    scanf("%f", &PIB);
    printf("Há quantos pontos turísticos no Estado: ");
    scanf("%d", &PontoTuristico);
    //Saída dos Dados da Carta B
    printf("\n==================================================\n");
    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", CodigoCarta);
    printf("\nPopulação: %d", populacao);
    printf("\nArea: %.2f km²", area);
    printf("\nNúmero de pontos turísticos: %d", PontoTuristico);
    printf("\nPIB: %.2f", PIB);
    printf("\n==================================================\n");
    return 0;
}
