#include <stdio.h>

int main() {
    int day, month, year;

    printf("Introdueix el teu dia de naixement:\n");
    scanf("%d",&day);

    printf("Introdueix el teu mes de naixement:\n");
    scanf("%d",&month);

    printf("Introdueix el teu any de naixement (4 digits):\n");
    scanf("%d",&year);

    int result = day + month + year;
    printf("El resultat és: %d\n",result);
}