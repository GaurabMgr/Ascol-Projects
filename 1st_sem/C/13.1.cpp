#include<stdio.h>
#include<conio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Demonstrate the differences among getch(), getche(),getchar().\n");
	printf("Enter the character for getchar: %c",getchar());
	printf("\nEnter the character for getch: %c",getch());
	printf("\nEnter the character for getche: %c",getche());
	getch();
	return 0;
}
