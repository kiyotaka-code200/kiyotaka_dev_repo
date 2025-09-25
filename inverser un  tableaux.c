#include <stdio.h>

int main() {
    int tab[6] = {9, 8, 7, 6, 5, 4};
    int n = 6;

    for (int i = 0; i < n/2; i++) {
        int tmp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = tmp;
    }

    printf("Tableau inversé : ");
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
