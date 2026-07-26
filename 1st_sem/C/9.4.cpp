#include <stdio.h>

int main() {
    printf("Name: Gaurab Ale Magar\n");
    printf("Program to Check if a Number is Odd or Even Using Conditional Operator\n");
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);
    return 0;
}

