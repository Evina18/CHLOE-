#include <stdio.h>
#include "test libry.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;



// Exercice 1 : Afficher Bonjour
void afficherBonjour() {
    printf("Bonjour\n");
}

// Exercice 2 : Inverser un entier
int inverserNombre() {
    int nombre, renverse = 0;
    printf("Entrez un nombre entier à trois chiffres : ");
    scanf("%d", &nombre);
    while (nombre != 0) {
        renverse = renverse * 10 + nombre % 10;
        nombre /= 10;
    }
    return renverse; // On retourne la valeur inversée
}

// Exercice 3 : Calculer le produit de deux nombres
double calculerProduit() {
    double num1, num2;
    printf("Entrez deux nombres réels : ");
    scanf("%lf %lf", &num1, &num2);
    return num1 * num2; // On retourne le produit
}

// Exercice 4 : Vérifier la parité
void verifierParite() {
    int nombre;
    printf("Entrez un entier : ");
    scanf("%d", &nombre);
    if (nombre % 2 == 0) {
        printf("L'entier est pair.\n");
    } else {
        printf("L'entier est impair.\n");
    }
}

// Exercice 5 : Comparer deux entiers
void comparerEntiers() {
    int a, b;
    printf("Entrez deux entiers a et b : ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("a > b\n");
    } else if (a < b) {
        printf("a < b\n");
    } else {
        printf("a = b\n");
    }
}

// Exercice 6 : Trier trois entiers
void trierEntiers() {
    int x, y, z;
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &x, &y, &z);

    // Tri des entiers
    if (x > y) { int temp = x; x = y; y = temp; }
    if (x > z) { int temp = x; x = z; z = temp; }
    if (y > z) { int temp = y; y = z; z = temp; }

    printf("Les nombres dans l'ordre croissant sont : %d, %d, %d\n", x, y, z);
}
// Exercice 16 :
    char x, y;

    printf("Entrez le premier caractère : ");
    scanf(" %c", &x); // Notez l'espace avant %c pour ignorer les espaces ou sauts de ligne
    printf("Entrez le second caractère : ");
    scanf(" %c", &y);

    printf("\nAvant permutation : x = %c, y = %c\n", x, y);
    permuterChar(&x, &y);
    printf("Après permutation : x = %c, y = %c\n", x, y);

    return 0;
}
int main() {
    int num1, num2;

    printf("Entrez le premier entier : ");
    scanf("%d", &num1);
    printf("Entrez le second entier : ");
    scanf("%d", &num2);

    int resultat = Somme(num1, num2);
    printf("La somme de %d et %d est : %d\n", num1, num2, resultat);

    return 0;
}
// Exercice 17
// Définition de la fonction Somme
int Somme(int a, int b) {
    return a + b;
}
}
