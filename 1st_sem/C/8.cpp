#include <stdio.h>

int main() {
		printf("Name: Gaurab Ale Magar\n");
		printf("Program to Swap Two Variables' Values with using a Third Variable\n");
    int a, b, temp;
    printf("Enter any 2 numbers: ");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swap %d %d\n", a, b);
    return 0;
}

