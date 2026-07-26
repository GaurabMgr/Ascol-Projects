#include <stdio.h>

int main() {
	printf("Name: Gaurab Ale Magar\Multiply 3*3 matrix\n");
    int A[3][3], B[3][3], result[3][3];
    int i, j, k;

    // Input elements for the first matrix (A)
    printf("Enter elements of 3x3 matrix A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for the second matrix (B)
    printf("Enter elements of 3x3 matrix B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result matrix to 0
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices A and B and store the result in matrix result
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("Result of A * B is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

