#include<stdio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Create 1 dimensional array of 5 integers, assign values & print them\n");
	int array[5];
	array[0]=10;
	array[1]=20;
	array[2]=30;
	array[3]=40;
	array[4]=50;
	printf("\nThe numbers entered in the array are: \n");
	for(int i=0;i<5;i++){
		printf("At index %d: %d\n",i,array[i]);
	}
}
