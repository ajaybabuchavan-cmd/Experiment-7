//Ajay Babu Chavan,UIN:-251P081,Year:-F.E,Division:-D
#include <stdio.h>

void addMatrix(int m1[3][3], int m2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main() {
    int m1[3][3], m2[3][3], result[3][3];

    printf("Enter the values for matrix1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the values for matrix2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    addMatrix(m1, m2, result);

    printf("Result:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}