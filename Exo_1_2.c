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
        {1, 2, 3, 4, 5},
        {7, a, c, 8, d},
        {c, 9, 4, z, 8},
        {5, 6, p, n, 3},
        {2, 9, t, m, k}
    };

   
    dispMat(mat);
    dispRows(mat);
    dispcols(mat);
    dispDiag(mat);
    swapTriang(mat);
    dispMat(mat);

    return 0;
}
