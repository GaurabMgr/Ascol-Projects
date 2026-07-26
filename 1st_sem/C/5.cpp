#include <stdio.h>

int main() {
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to Input 3 Integer Values and Print in Forward and Reversed Order");
    int a, b, c;
    printf("\nEnter any 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n%d %d %d\n", a, b, c);
    printf("%d %d %d\n", c, b, a);
    return 0;
}

