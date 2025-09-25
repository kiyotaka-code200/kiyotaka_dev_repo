#include <stdio.h>

int main() {
    int a = 4, b = 7, produit = 0;

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            produit += 1;
        }
    }

    printf("Produit de %d × %d = %d\n", a, b, produit);
    return 0;
}
