#include <stdio.h>
#include <stdlib.h>
#include "test libry.h"
int main( void ) {
 int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 int choix;

    do {
        printf("\nMenu :\n");
        printf("1. Afficher Bonjour\n");
        printf("2. Inverser un nombre\n");
        printf("3. Calculer le produit de deux nombres\n");
        printf("4. Vérifier la parité\n");
        printf("5. Comparer deux entiers\n");
        printf("6. Trier trois entiers\n");
        printf("7. Permuter deux caracteres\n");
        printf("8. Somme de deux entiers\n");
        printf("0. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                afficherBonjour();
                break;
            case 2: {
                int resultat = inverserNombre();
                printf("Le nombre inversé est : %d\n", resultat);
                break;
            }
            case 3: {
                double produit = calculerProduit();
                printf("Le produit est : %.3lf\n", produit);
                break;
            }
            case 4:
                verifierParite();
                break;
            case 5:
                comparerEntiers();
                break;
            case 6:
                trierEntiers();
            case 9: // Permuter deux caractï¿½res
                printf("Entrez deux caracteres : ");
                scanf(" %c %c", &char1, &char2);
                permutation_char(&char1, &char2);
                break;

            case 10: // Somme de deux entiers
                printf("Entrez deux entiers : ");
                scanf("%d %d", &a, &b);
                printf("La somme de %d et %d est : %d\n", a, b, somme(a, b));
                break;
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide, essayez encore.\n");
        }
    } while (choix != 0);

    return 0;
}



