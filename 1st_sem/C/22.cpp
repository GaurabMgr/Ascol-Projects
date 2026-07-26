#include<stdio.h>
int sum(int n){
	if(n<2){
		return n;
	}
	return n+sum(n-1);
}
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Calculate sum of first 50 natural numbers\n");
	printf("The sum of first 50 natural numbers is %d",sum(50));
}
