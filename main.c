#include <stdio.h>

#define DIM 1000

int Simmetria(int matrix[DIM][DIM], int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Non è simmetrica
            }
        }
    }
    return 1; // è simmetrica
}

int main() {
    int r;
    int matrix[DIM][DIM];

    printf("Inserisci la dimensione della matrice max %d: ", DIM);
    scanf("%d", &r);

    if (r > DIM || r <= 0) {
        printf("errore: dimensione sbagliata.\n");
        return 1;
    }

    printf("Inserisci gli elementi della matrice %d x %d:\n", r, r);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (Simmetria(matrix, r)) {
        printf("La matrice e' simmetrica.\n");
    } else {
        printf("La matrice non e' speculare simmetrica.\n");
    }

    return 0;
}
