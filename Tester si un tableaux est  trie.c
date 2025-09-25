#include <stdio.h>

int main() {
    int tab[5] = {2, 5, 7, 10, 12};
    int sorted = 1;

    for (int i = 0; i < 4; i++) {
        if (tab[i] > tab[i+1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Le tableau est trié.\n");
    else
        printf("Le tableau n'est pas trié.\n");

    return 0;
}
