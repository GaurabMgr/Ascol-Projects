//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

void matrixreader(int matrix[3][2]) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<2; j++) {
            printf("enter the value for %d,%d element: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void matrixdisplayer(int matrix[3][2]) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<2; j++) {
            if (j==0) {
                printf("| %4d\t",matrix[i][j]);
            } else if (j==1) {
                printf("%4d |",matrix[i][j]);
            }
        }
        printf("\n");
    }
}


int main() {
	printf("Name: Gaurab Ale Magar\nRead 3*2 matrix, add then print\n");
    int array1[3][2],array2[3][2];
    printf("MATRIX 1:\n");
    matrixreader(array1);
    printf("MATRIX 2:\n");
    matrixreader(array2);
    //matrix addition
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++) {
            array1[i][j]=array1[i][j]+array2[i][j];
        }
    }
    matrixdisplayer(array1);
    getch();
    return 0;
}

