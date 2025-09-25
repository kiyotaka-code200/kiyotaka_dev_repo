#include <stdio.h>

int main() {
    int vect[3] = {1, 0, 2};
    int mat[3][3] = {
        {2, 1, 3},
        {0, 4, 5},
        {1, 2, 1}
    };
    int result[3] = {0};

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            result[j] += vect[i] * mat[i][j];
        }
    }

    printf("Résultat du produit vecteur × matrice: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
