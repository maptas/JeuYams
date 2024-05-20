#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

const int DEMAX = 6;
const int DEMIN = 1;
const int FULLHOUSE = 25;
const int PTESUITE = 30;
const int GRDSUITE = 40;
const int YAMS = 50;
const int BONUS = 35;

int lancerDes(int *de1, int *de2, int *de3, int *de4, int *de5);
void afficherTab(char nomj1[10], char nomj2[10]);
void afficherDes();
void choixScore();
void relancer(int *de1, int *de2, int *de3, int *de4, int *de5);
void affichageScore();

int main()
{
    char nomj1[10];
    char nomj2[10];
    int de1, de2, de3, de4, de5;
    printf("JEU DU YAMS\n");
    printf("Quel est le nom du joueur 1 ?\n");
    scanf("%s",nomj1);
    printf("Quel est le nom du joueur 2 ?\n");
    scanf("%s",nomj2);
    printf("\n");
    afficherTab(nomj1, nomj2);
    printf("C'est au tour de %s.\n",nomj1);
    lancerDes(&de1, &de2, &de3, &de4, &de5);
    printf("Hey\n");
    relancer(&de1, &de2, &de3, &de4, &de5);
    
}

void afficherTab(char nomj1[10], char nomj2[10])
{
    printf("Jeu du YAMS        %s          %s\n",nomj1,nomj2);
    printf("Total de 1\n");
    printf("Total de 2\n");
    printf("Total de 3\n");
    printf("Total de 4\n");
    printf("Total de 5\n");
    printf("Total de 6\n");
    printf("Bonus si < [35]\n");
    printf("Total supérieur\n");
    printf("Brelan [total]\n");
    printf("Carré [total]\n");
    printf("Full House [25]\n");
    printf("Petite Suite [30]\n");
    printf("Grande Suite [35]\n");
    printf("Yams [50]\n");
    printf("Chance [total]\n");
    printf("Total inférieur\n");
    printf("Total\n");
    printf("\n");
    printf("\n");
}

int lancerDes(int *de1, int *de2, int *de3, int *de4, int *de5)
{
    int total, lancer;
    lancer = 0;
    srand (time(NULL));
    printf("Lancer les dés en appuyant sur 1 :  ");
    while(lancer != 1)
    {
        scanf("%d", &lancer);
        if(lancer == 1)
        {
            *de1 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
            *de2 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
            *de3 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
            *de4 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
            *de5 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
            total = *de1 + *de2 + *de3 + *de4 + *de5;
            printf(" dé 1 : %d, dé 2 : %d, dé 3 : %d, dé 4 : %d, dé 5 : %d et total : %d.\n",*de1, *de2, *de3, *de4, *de5, total);
        }
    }
    return total;
}

void relancer(int *de1, int *de2, int *de3, int *de4, int *de5)
{
    int relance = 0;
    int z = 0;
    srand (time(NULL));
    printf("Vous avez la possibilité de relancer vos dés 3 fois ntm.\n");
    printf("Choisisser vos dés et terminer votre liste par -1 fdp          .\n");
    while(relance != 3)
    {
        relance++;
        while(z != -1)
        {
            scanf("%d",&z);
            switch(z)
            {
                case 1:
                *de1 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
                printf("Le dé 1 a été relancé.\n");
                printf("Dé 1 : %d\n",*de1);
                break;
            }
            switch(z)
            {
                case 2:
                *de2 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
                printf("Le dé 2 a été relancé.\n");
                printf("Dé 2 : %d\n",*de2);
                break;
            }
            switch(z)
            {
                case 3:
                *de3 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
                printf("Le dé 3 a été relancé.\n");
                printf("Dé 3 : %d\n",*de3);
                break;
            }
            switch(z)
            {
                case 4:
                *de4 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
                printf("Le dé 4 a été relancé.\n");
                printf("Dé 4 : %d\n",*de4);
                break;
            }
            switch(z)
            {
                case 5:
                *de5 = (rand() % (DEMAX - DEMIN + 1)) + DEMIN;
                printf("Le dé 5 a été relancé.\n");
                printf("Dé 5 : %d\n",*de5);
                break;
            }
            if(z == -1)
            {
                relance = 0;
                printf("Vous pouvez encore relancer vos dés 2 fois.\n");
                printf("Si vous ne voulez pas, tapper -1.\n");
            }
        }
    }
    
}