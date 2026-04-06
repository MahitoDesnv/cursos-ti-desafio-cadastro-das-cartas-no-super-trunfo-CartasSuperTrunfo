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


     printf("==================\n");
     printf("  SUPER TRUNFO !\n");
     printf("==================\n");

// Entrada da carta 1 abaixo:
     printf("=========\n");
     printf("Carta 1: \n");
     printf("=========\n");

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

     printf("=========\n");
     printf("Carta 2: \n");
     printf("=========\n");

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

poder1 = (populacao1 + area1 + pturistico1 + pibpc1) - densidade1;
poder2 = (populacao2 + area2 + pturistico2 + pibpc2) - densidade2;

printf("==============================\n");
printf("COMPARANDO CARTAS dos JOGADORES: \n");
printf("==============================\n");

printf("Carta 1 - %s: %lu\n" "Carta 2 - %s: %lu\n", nomedacidade1, populacao1, nomedacidade2, populacao2);

if (populacao1 > populacao2){
printf("Carta 1 - %s venceu com: %lu de população.\n", nomedacidade1, populacao1);

} else {
printf("Carta 2 - %s venceu com: %lu de população.\n", nomedacidade2, populacao2);

}

printf("Carta 1 - %s: %.2f\n" "Carta 2 - %s: %.2f\n", nomedacidade1, area1, nomedacidade2, area2);

if (area1 > area2){
printf("Carta 1 - %s venceu com %.2f de área.\n", nomedacidade1, area1);

} else { 
printf("Carta 2 - %s venceu com %.2f de área.\n", nomedacidade2, area2);

}

printf("Carta 1 - %s: %.2f\n" "Carta 2 - %s: %.2f\n", nomedacidade1, pib1, nomedacidade2, pib2);

if (pib1 > pib2){
printf("Carta 1 - %s venceu com %.2f de PIB.\n", nomedacidade1, pib1);

} else {
printf("Carta 2 - %s venceu com %.2f de PIB.\n", nomedacidade2, pib2);

}

printf("Carta 1 - %s: %.2f\n" "Carta 2 - %s: %.2f\n", nomedacidade1, densidade1, nomedacidade2, densidade2);

if (densidade1 < densidade2){
printf("Carta 1 - %s venceu com %.2f de densidade.\n", nomedacidade1, densidade1);

} else {
printf("Carta 2 - %s venceu com %.2f de densidade.\n", nomedacidade2, densidade2);

}

printf("Carta 1 - %s: %.2f\n" "Carta 2 - %s: %.2f\n", nomedacidade1, pibpc1, nomedacidade2, pibpc2);

if (pibpc1 > pibpc2){
printf("Carta 1 - %s venceu com %.2f de PIB per capita.\n", nomedacidade1, pibpc1);

} else {
printf("Carta 2 - %s venceu com %.2f de PIB per capita.\n", nomedacidade2, pibpc2);

}

if (poder1 > poder2){
    printf("A carta vencedora foi a cidade de %s .\n", nomedacidade1);

} else { 
printf("A carta vencedora foi a cidade de %s .\n", nomedacidade2);

}

    int mainInteraction;

     printf("===================\n");
     printf(" MENU INTERATIVO: \n");
     printf("===================\n");

     printf("[1] Atributos da Carta 1\n");
     printf("[2] Atributos da Carta 2\n");
     printf("[3] Comparações\n");
     scanf("%d", &mainInteraction);

switch (mainInteraction){

     case 1: 
            printf("População: %lu\n", populacao1);
            printf("Área: %.2f\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos turísticos: %d\n", pturistico1);
            printf("Densidade Populacional: %.2f\n", densidade1);
            printf("PIB per Capita: %.2f\n", pibpc1);
     break;       

     case 2:
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", pturistico2);
            printf("Densidade Populacional: %.2f\n", densidade2);
            printf("PIB per Capita: %.2f\n", pibpc2);
     break;      

     case 3: 
     int choice;
            printf("[1] Populações\n");
            printf("[2] Áreas\n");
            printf("[3] PIBs\n");
            printf("[4] Pontos turísticos\n");
            printf("[5] Densidades Populacionais\n");
            printf("[6] PIBs per Capita\n");
                  scanf("%d", &choice);
   
            if (choice == 1){

               if (populacao1 > populacao2){
                  
                  printf("A população da Carta 1 venceu!\n");
               }
               else {

                  printf("A população da Carta 2 venceu!\n");
               }
            }

            if (choice == 2){

               if (area1 > area2){

                  printf("A Área da Carta 1 venceu!\n");
               }
               else {

                  printf("A Área da Carta 2 venceu!\n");
               }
            }

            if (choice == 3){

               if (pib1 > pib2){

                  printf("O PIB da Carta 1 venceu!\n");
               }
               else {

                  printf("O PIB da Carta 2 venceu!\n");
               }
            }

            if (choice == 4){

               if (pturistico1 > pturistico2){

                  printf("Os Pontos turísticos da Carta 1 venceram!\n");
               }
               else {

                  printf("Os Pontos turísticos da Carta 2 venceram!\n");
               }
            }

            if (choice == 5){

               if(densidade1 < densidade2){

                  printf("A Densidade Populacional da Carta 1 por ser menor, venceu!\n");
               }
               else {

                  printf("A Densidade Populacional da Carta 2 por ser menor, venceu!\n");
               }
            }

            if (choice == 6){

               if (pibpc1 > pibpc2){

                  printf("O PIB per Capita da Carta 1 venceu!\n");
               }
               else {

                  printf("O PIB per Capita da Carta 2 venceu!\n");
               }
            }
   break;

      default: 
            printf("Número não encontrado.");
     break;
}

}


