#include <stdio.h>

#define DIM 1000

int matrix[DIM][DIM]; // Dichiarata globalmente per evitare stack overflow

int Simmetria(int matrix[][DIM], int r) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < i; j++) { // Controlliamo solo sotto la diagonale principale
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // La matrice non è simmetrica
            }
        }
    }
    return 1; // La matrice è simmetrica
}

int main() {
    int r;

    printf("Inserisci la dimensione della matrice (max %d): ", DIM);
    if (scanf("%d", &r) != 1 || r > DIM || r <= 0) {
        printf("Errore: dimensione non valida.\n");
        return 1;
    }

    printf("Inserisci gli elementi della matrice %d x %d:\n", r, r);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Errore: input non valido.\n");
                return 1;
            }
        }
    }

    if (Simmetria(matrix, r)) {
        printf("La matrice e' simmetrica.\n");
    } else {
        printf("La matrice non e' simmetrica.\n");
    }

    return 0;
}
