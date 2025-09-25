#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 0, 2},
        {-1, 3, 1},
        {3, 2, 0}
    };
    int b[3][3] = {
        {3, 1, 2},
        {2, 1, 0},
        {1, 0, 1}
    };
    int product[3][3] = {0};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                product[i][j] += a[i][k] * b[k][j];

    printf("Produit A × B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}
