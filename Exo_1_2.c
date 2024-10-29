#include <stdio.h>

void dispMat(int mat[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void dispRows(int mat[size][siz]){
    for (int i = 0; i < size; i += 2) {  
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void dispcols(int mat[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j += 2) { 
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void dispDiag(int mat[size][size]) {
    printf("Main diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    printf("Secondary diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", mat[i][size - i - 1]);
    }
    printf("\n");
}

void swapTriang(int mat[size][size]) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            int t = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = t;
        }
    }
}

int main() {
    int mat[size][size] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

   
    dispMat(mat);
    dispRows(mat);

    printf("\nMatrix with odd-indexed elements in each row:\n");
    displayOddIndexedElements(matrix);

    printf("\nDiagonals of the Matrix:\n");
    displayDiagonals(matrix);

    printf("\nMatrix after swapping triangles:\n");
    swapTriangles(matrix);
    displayMatrix(matrix);

    return 0;
}
