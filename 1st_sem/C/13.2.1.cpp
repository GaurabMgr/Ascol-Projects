#include<stdio.h>
#include<conio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Demonstrate the difference between scanf() & gets()\n");
	char name[20];
	printf("Enter the name: ");
	scanf("%s",name);
	//gets(name);
	printf("\nEntered name is : %s",name);
	//puts(name);
	getch();
	return 0;
}
