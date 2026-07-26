#include<stdio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Asks the user 5 integers and store them in arary then print\n");
	int array[5];
	for(int i=0;i<5;i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nThe numbers entered are: ");
	for(int i=0;i<5;i++){
		printf("%d\t",array[i]);
	}
}
