#include <stdio.h>

#define SIZE 5

void dispMat(char mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}

void dispRows(char mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i += 2) {  
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}

void dispCols(char mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 1; j < SIZE; j += 2) { 
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}

void dispDiag(char mat[SIZE][SIZE]) {
    printf("Main diagonal: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%c ", mat[i][i]);
    }
    printf("\nSecondary diagonal: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%c ", mat[i][SIZE - i - 1]);
    }
    printf("\n");
}

void swapTriang(char mat[SIZE][SIZE]) {
    for (int i = 1; i < SIZE; i++) {
        for (int j = 0; j < i; j++) {
            char t = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = t;
        }
    }
}

int main() {
    char mat[SIZE][SIZE] = {
        {'1', '2', '3', '4', '5'},
        {'7', 'a', 'c', '8', 'd'},
        {'x', '9', '4', 'z', '8'},
        {'5', '6', 'p', 'n', '3'},
        {'2', '9', 't', 'm', 'k'}
    };

    dispMat(mat);
    printf("\n");
    dispRows(mat);
    printf("\n");
    dispCols(mat);
    printf("\n");
    dispDiag(mat);
    printf("\n");
    swapTriang(mat);
    dispMat(mat);
    
    return 0;
}
