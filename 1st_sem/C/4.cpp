#include <stdio.h>
int main() {
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to Calculate Simple Interest");
    float P = 4000, T = 2, R = 5.5, SI;
    SI = (P * T * R) / 100;
    printf("\nThe simple interest is %.2f\n", SI);
    return 0;
}

