#include <stdio.h>

int main(void) {
    int nprod, prod;
    float costotot, costoprod;
    printf("inserisci il numero di prodotti che hai acquistato: ");
    scanf("%d", &nprod);
    prod=1;
    while (nprod >= prod ) {
        printf(" inserisci il prezzo del prodotto: ");
        scanf("%f", &costoprod);
        prod++;
        costotot += costoprod;
    }
    printf("il prezzo totale e': %.2f", costotot);
}
