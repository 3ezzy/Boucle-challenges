#include <stdio.h>

int main() {
    int n, factorielle = 1;


    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);


    if (n < 0) {
        printf("La factorielle n'est pas d�finie pour les nombres n�gatifs.\n");
    } else {

        for (int i = 1; i <= n; i++) {
            factorielle = factorielle * i;
        }


        printf("La factorielle de %d est : %d\n", n, factorielle);
    }

    return 0;
}
