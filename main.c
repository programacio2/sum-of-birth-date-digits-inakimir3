#include <stdio.h>

int main() {
    int day, month, year;

    printf("Escriu la teva data de naixement en format MM/DD/YYYY: ");
    scanf("%d/%d/%d", &month, &day, &year);

    while (year < 1000 || year > 9999) {
        printf("L'any ha de tenir 4 dígits. Torna-ho a provar: ");
        scanf("%d/%d/%d", &month, &day, &year);
    }

    int result = day + month + year;
    printf("El resultat és: %d\n", result);

}