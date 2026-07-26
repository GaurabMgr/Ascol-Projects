#include <stdio.h>

int main() {
	printf("Name: Gaurab Ale Magar\n");
    int num = 42;  // Declare an integer variable
    int *ptr = &num;  // Declare a pointer to the integer variable

    // Print the value of the integer using the pointer
    printf("Value of num: %d\n", *ptr);  // Dereference the pointer to access the value
	printf("address of num: %p\n",(void*)&num);
	printf("Value of ptr(address of num): %p\n",(void*)ptr);
    return 0;
}
