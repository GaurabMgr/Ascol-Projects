#include <stdio.h>
#include <math.h>
int main() {
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to Calculate Simple and Compound Interest\n");
    float P , T, R, SI, CI;
    printf("Enter principal, time and rate: ");
    scanf("%f%f%f",&P,&T,&R);
    SI = (P * T * R) / 100;
    CI = P * (pow(1 + R / 100, T)) - P;
    printf("\nThe simple interest is %f\n", SI);
    printf("The compound interest is %f\n", CI);
    return 0;
}

