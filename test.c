#include <stdio.h>

int main()
{
    int numero, somme = 0;

    printf("Veuillez entrer un  numero: ");

    scanf("%d", &numero);

    somme = somme + numero;

    printf("La somme est: %d\n", somme);

    return 0;
}