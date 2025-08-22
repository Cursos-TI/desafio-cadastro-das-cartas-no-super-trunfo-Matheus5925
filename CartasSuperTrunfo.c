#include <stdio.h>
#include <string.h>

// Super Trunfo - Cadastro das Cartas

struct Cart {
  char estado[2];         // apenas 1 letra (A até H) + '\0'
  char codigo_carta[3];   // ex: "01", "02", "03", "04"
  char codigo_final[5];   // ex: "A01" (1 letra + 2 números + '\0')
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  float densidade_populacao;
  float pib_percapta;
};

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
  struct Cart carta1, carta2;

  printf("--- Carta 1 ---\n");
  printf("Digite o estado (A até H): ");
  scanf("%1s", carta1.estado);

  printf("Digite o código da carta (01 a 04): ");
  scanf("%2s", carta1.codigo_carta);

  // junta estado + código → A + 01 = A01
  sprintf(carta1.codigo_final, "%s%s", carta1.estado, carta1.codigo_carta);

  limparBuffer();

  printf("Digite a população: ");
  scanf("%d", &carta1.populacao);

  printf("Digite a área (km²): ");
  scanf("%f", &carta1.area);

  printf("Digite o PIB: ");
  scanf("%f", &carta1.pib);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &carta1.pontos_turisticos);

  carta1.densidade_populacao = (float)carta1.populacao / carta1.area;
  carta1.pib_percapta = carta1.pib / carta1.populacao;

  printf("\n--- Carta 2 ---\n");
  printf("Digite o estado (A até H): ");
  scanf("%1s", carta2.estado);

  printf("Digite o código da carta (01 a 04): ");
  scanf("%2s", carta2.codigo_carta);

  sprintf(carta2.codigo_final, "%s%s", carta2.estado, carta2.codigo_carta);

  limparBuffer();

  printf("Digite a população: ");
  scanf("%d", &carta2.populacao);

  printf("Digite a área (km²): ");
  scanf("%f", &carta2.area);

  printf("Digite o PIB: ");
  scanf("%f", &carta2.pib);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &carta2.pontos_turisticos);

  carta2.densidade_populacao = (float)carta2.populacao / carta2.area;
  carta2.pib_percapta = carta2.pib / carta2.populacao;

  // Exibindo os dados
  printf("\n--- Dados da Carta 1 ---\n");
  printf("Código: %s\n", carta1.codigo_final);
  printf("População: %d\n", carta1.populacao);
  printf("Área: %.2f km²\n", carta1.area);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
  printf("Densidade Populacional: %.2f\n", carta1.densidade_populacao);
  printf("PIB Per Capta: %.2f\n", carta1.pib_percapta);

  printf("\n--- Dados da Carta 2 ---\n");
  printf("Código: %s\n", carta2.codigo_final);
  printf("População: %d\n", carta2.populacao);
  printf("Área: %.2f km²\n", carta2.area);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
  printf("Densidade Populacional: %.2f\n", carta2.densidade_populacao);
  printf("PIB Per Capta: %.2f\n", carta2.pib_percapta);

  return 0;
}
