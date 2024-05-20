#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>

const int DEMAX = 6;
const int DEMIN = 1;
const int FULLHOUSE = 25;
const int PTESUITE = 30;
const int GRDSUITE = 40;
const int YAMS = 50;
const int BONUS = 35;


void afficherTab(char nomj1[10], char nomj2[10]);


int main()
{
    int de1;
    char nomj1[10], nomj2[10];
    printf("JEU DU YAMS\n");
    printf("Quel est le nom du joueur 1 ?\n");
    scanf("%s",nomj1);
    printf("Quel est le nom du joueur 2 ?\n");
    scanf("%s",nomj2);
    afficherTab(nomj1, nomj2);
    srand (time(NULL));
    de1 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
    printf("%d",de1);
}

void afficherTab(char nomj1[10], char nomj2[10])
{
    printf("Jeu du YAMS      | %s          %s\n",nomj1,nomj2);
    printf("Total de 1       |\n");
    printf("Total de 2       |\n");
    printf("Total de 3       |\n");
    printf("Total de 4       |\n");
    printf("Total de 5       |\n");
    printf("Total de 6       |\n");
    printf("Bonus si < [35]  |\n");
    printf("Total supérieur  |\n");
    printf("Brelan [total]   |\n");
    printf("Carré [total]    |\n");
    printf("Full House [25]  |\n");
    printf("Petite Suite [30]|\n");
    printf("Grande Suite [35]|\n");
    printf("Yams [50]        |\n");
    printf("Chance [total]   |\n");
    printf("Total inférieur  |\n");
    printf("Total            |\n");
}