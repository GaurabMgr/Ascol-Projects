#include <stdio.h>
#include <conio.h>

struct rectangle {
    float length;
    float width;
} rct;

int main() {
	printf("Name: Gaurab Ale Magar\n");
    printf("Enter the length of Rectangle: ");
    scanf("%f",&rct.length);
    printf("Enter the width of the Rectangle: ");
    scanf("%f",&rct.width);

    printf("Area of rectangle: %.2f",rct.length*rct.width);
    getch();
    return 0;
}
