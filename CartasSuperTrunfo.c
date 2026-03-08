#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturistico1, pturistico2;

// Entrada da carta 1 abaixo:
printf("Carta 1: \n");

printf("Estado: \n");
scanf(" %c", &estado1);

printf("Código: \n");
scanf("%s", codigo1);
getchar();

printf("Nome da cidade: \n");
fgets(nomedacidade1, 20, stdin);
nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;

printf("População: \n");
scanf("%d", &populacao1);

printf("Área: \n");
scanf("%f", &area1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Pontos turísticos: \n");
scanf("%d", &pturistico1);

// Entrada da carta 2 abaixo:
printf("Carta 2: \n");

printf("Estado: \n");
scanf(" %c", &estado2);

printf("Código: \n");
scanf("%s", codigo2);

printf("Nome da cidade: \n");
fgets(nomedacidade2, 20, stdin);
nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

printf("População: \n");
scanf("%d", &populacao2);

printf("Área: \n");
scanf("%f", &area2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Pontos turísticos: \n");
scanf("%d", &pturistico2);

// Leitura da carta 1:
printf("Carta 1: \n");
printf("Estado: %c\n" "Código: %s\n" "Nome da cidade: %s\n" "População: %d\n" "Área: %.2fkm²\n" "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n", estado1, codigo1, nomedacidade1, populacao1, area1, pib1, pturistico1);

// Leitura da carta 2:
printf("Carta 2: \n");
printf("Estado: %c\n" "Código: %s\n" "Nome da cidade: %s\n" "População: %d\n" "Área: %.2fkm²\n" "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n", estado2, codigo2, nomedacidade2, populacao2, area2, pib2, pturistico2);

}