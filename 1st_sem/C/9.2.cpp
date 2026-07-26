#include <stdio.h>

int main() {
    printf("Name: Gaurab Ale Magar\n");
    printf("Program to Check if a Number is Odd or Even Using Bitwise Operator\n");
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num & 1) {
        printf("%d is odd\n", num);
    } else {
        printf("%d is even\n", num);
    }
    return 0;
}

