#include <stdio.h>

int main() {
		printf("Name: Gaurab Ale Magar\n");
		printf("Program to Swap Two Variables' Values Without Using a Third Variable\n");
    int a, b;
    printf("Enter any 2 numbers: ");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap %d %d\n", a, b);
    return 0;
}

