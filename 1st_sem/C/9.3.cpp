#include <stdio.h>

int main() {
  printf("Name: Gaurab Ale Magar\n");
  printf("Program to Check if a Number is Odd or Even Without Using Modulus and Bitwise Operator\n");
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num / 2 * 2 == num) {
        printf("\n%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}

