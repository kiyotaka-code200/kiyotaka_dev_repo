#include <stdio.h>

void sort(int tab[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (tab[i] > tab[j]) {
                int tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
}

int main() {
    int tab[5] = {8, 2, 7, 4, 5};
    int n = 5;

    sort(tab, n);
    printf("La médiane est %d\n", tab[n/2]);

    return 0;
}
