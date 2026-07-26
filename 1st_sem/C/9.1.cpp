#include <stdio.h>

int main() {
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to Check if a Number is Odd or Even Using Modulus Operator\n");
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\n%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}

