#include <stdio.h>

main() {
	int x;
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to Increment and Decrement a Variable Using ++ and -- Operators\n");
	printf("Enter any number: ");
    scanf("%d", &x);
    printf("\n%d\n", x);
    x++;
    printf("Increment: %d\n", x);
    x--;
    printf("Decrement: %d\n", x);
}

