#include <stdio.h>

int main() {
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to Print the Size of Different Data Types\n");
    int a;
    float b;
    double c;
    char d;
    printf("Size of integer is %zu\n", sizeof(a));
    printf("Size of float is %zu\n", sizeof(b));
    printf("Size of double is %zu\n", sizeof(c));
    printf("Size of char is %zu\n", sizeof(d));
    return 0;
}

