//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

void matrixsummer(int matrix[10]) {
    int sum=0;
    for (int i=0; i<10;i++) {
        sum=sum+matrix[i];
    }
    printf("\n The sum of the matrix is: %d",sum);
}

int main() {
	printf("Name: Gaurab Ale Magar\nFunction that takes an array of integers in parameter,Print the sum of elements in array\n");
	int array1[10]={1,2,3,4,5,6,7,8,9,10};
    matrixsummer(array1);
    getch();
    return 0;
}
