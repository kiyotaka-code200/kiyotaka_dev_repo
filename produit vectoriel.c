#include <stdio.h>

int main() {
    int u[3] = {2, 3, 4};
    int v[3] = {5, 6, 7};
    int prod[3];

    prod[0] = u[1]*v[2] - u[2]*v[1];
    prod[1] = u[2]*v[0] - u[0]*v[2];
    prod[2] = u[0]*v[1] - u[1]*v[0];

    printf("Produit vectoriel u × v = [%d, %d, %d]\n", prod[0], prod[1], prod[2]);

    return 0;
}
