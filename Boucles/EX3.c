#include <stdio.h>

int main() {
    int n, somme = 0;


    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
    } else {

        for (int i = 1; i <= n; i++) {
            somme = somme + i;
        }

        printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);
    }

    return 0;
}
