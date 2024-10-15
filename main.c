#include <stdio.h>

int main(void) {
    int nprod, prod;
    float costotot=0, costoprod;
    printf("inserisci il numero di prodotti che hai acquistato: ");
    scanf("%d", &nprod);
    /*while (nprod >= prod ) {
        printf(" inserisci il prezzo del prodotto: ");
        scanf("%f", &costoprod);
        prod++;
        costotot += costoprod;
    }*/
    for (prod = 1; prod <= nprod; prod++) {
        printf(" inserisci il prezzo del prodotto: ");
        scanf("%f", &costoprod);
        costotot += costoprod;
    }
    printf("il prezzo totale e': %.2f", costotot);
}
