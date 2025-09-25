#include <stdio.h>

int main() {
    int tab[6] = {10, 22, 35, 47, 53, 67};
    int x = 47;
    int found = 0;

    for (int i = 0; i < 6; i++) {
        if (tab[i] == x) {
            printf("Élément %d trouvé à l'indice %d.\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Élément %d non trouvé.\n", x);

    return 0;
}
