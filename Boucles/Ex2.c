#include <stdio.h>

int main() {
    int n, factorielle = 1;


    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);


    if (n < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {

        for (int i = 1; i <= n; i++) {
            factorielle = factorielle * i;
        }


        printf("La factorielle de %d est : %d\n", n, factorielle);
    }

    return 0;
}
