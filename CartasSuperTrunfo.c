#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomedacidade1[20], nomedacidade2[20];
    int  pturistico1, pturistico2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpc1, pibpc2; 
    unsigned long int populacao1, populacao2;
    float poder1, poder2;
    float pibcalculo1, pibcalculo2;


printf("Jogo: Super Trunfo!\n");

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
scanf("%lu", &populacao1);

printf("Área: \n");
scanf("%f", &area1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Pontos turísticos: \n");
scanf("%d", &pturistico1);
// Final carta 1.


// Entrada da carta 2 abaixo:
printf("Carta 2: \n");

printf("Estado: \n");
scanf(" %c", &estado2);

printf("Código: \n");
scanf("%s", codigo2);
getchar ();

printf("Nome da cidade: \n");
fgets(nomedacidade2, 20, stdin);
nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

printf("População: \n");
scanf("%lu", &populacao2);

printf("Área: \n");
scanf("%f", &area2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Pontos turísticos: \n");
scanf("%d", &pturistico2);
// Final carta 2.

//Cálculo da minha densidade populacional, padronizada.
densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;

// Primeiro multipliquei meu PIB por 1b, para depois dividir. Pois eu abreviei o valor de PIB na escrita acima como 699.28b e 300.50b
pibpc1 = (pib1 * 1000000000) / populacao1;
pibpc2 = (pib2 * 1000000000) / populacao2;

// Leitura da carta 1:
printf("Carta 1: \n");
printf("Estado: %c\n" "Código: %s\n" "Nome da cidade: %s\n" "População: %lu\n" "Área: %.2f km²\n" "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n" "Densidade Populacional: %.2f hab/km²\n" "PIB per capita: %.2f reais\n", estado1, codigo1, nomedacidade1, populacao1, area1, pib1, pturistico1, densidade1, pibpc1);

// Leitura da carta 2:
printf("Carta 2: \n");
printf("Estado: %c\n" "Código: %s\n" "Nome da cidade: %s\n" "População: %lu\n" "Área: %.2f km²\n" "PIB: %.2f bilhões de reais\n" "Pontos Turísticos: %d\n" "Densidade Populacional: %.2f hab/km²\n" "PIB per capita %.2f reais\n", estado2, codigo2, nomedacidade2, populacao2, area2, pib2, pturistico2, densidade2, pibpc2);

printf("COMPARANDO CARTAS dos JOGADORES: \n");

printf("População - Carta: %d venceu!\n" "Área - Carta: %d venceu!\n" "PIB - Carta: %d venceu!\n" "Pontos turísticos - Carta: %d venceu!\n" "PIB per capita - Carta: %d venceu!\n" "Densidade Populacional - Carta: %d venceu!\n", populacao1 > populacao2, area1 > area2, pib1 > pib2, pturistico1 > pturistico2, pibpc1 > pibpc2, densidade1 < densidade2);

//Fiz essa variação para encontrar o valor "cru" do PIB, pois caso o jogador informe o PIB com abreviação de bilhões, aqui terá o valor final de PIB para que seja feito o cálculo do valor da carta e dado o seu super poder (embora não precide disso tudo). xD
pibcalculo1 = pib1 * 1000000000;
pibcalculo2 = pib2 * 1000000000;

//Soma dos valores e atributos para realização do cálculo do super poder de cada carta, a densidade foi subtraída, por conta que quanto menor a densidade, melhor será a soma da carta e os números perdidos.
poder1 = (populacao1 + area1 + pibcalculo1 + pturistico1 + pibpc1) - densidade1;
poder2 = (populacao2 + area2 + pibcalculo2 + pturistico2 + pibpc2) - densidade2;

printf("O poder da carta 1 é de: %.2f\n" "E o poder da carta 2 é de: %.2f\n", poder1, poder2);

printf("A carta: %d venceu o jogo!\n", poder1 > poder2);



//Estágio 3: 
//Cálcular a densidade populacional e o PIB per Capita, calcular e armazenar os valores assim como no nível intermediário. (JÁ CALCULADO)

//Calcular o super poder da carta: somando todos os atributos como população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional. (JÁ CALCULADO)
//Quanto menor a densidade, maior o poder da carta. (Calculado subtraindo o valor das cartas pelo valor da densidade, ou seja, quanto menor sua densidade, maior será os valores que você terá, devido a pouca perca.)
//Armazenar o super poder como float. (Sim, foi armazenado.)

//Comparar as cartas: comparar atributo por atributo (exceto estado, código e nome), assim como também o super poder. Somente para a densidade, que a carta que menor houver, vence. Para o restante dos atributos,
//maiores valores vencerão. (Sim comparado como, 1 ou 0. E comparação entre menor densidade também foi feito, sempre levando em consideração a Carta 1 sob a Carta 2).

//Comparação final: cada atributo deverá ser imprimido na tela informando qual carta venceu, carta 1 ou carta 2, exibindo os resultados de comparação. (Atributos imprimidos)
//(1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence). (Feito, assim como o supor poder também foi imprimido, e com base nos valores do super poder, surgiu a carta vencedora).

//Pseudocódigo: posso criar uma comparação entre os super poderes das cartas como (>) e imprimir no final "SUPER PODER - Carta: %d venceu o JOGO!\n", poder1 > poder2);


}


