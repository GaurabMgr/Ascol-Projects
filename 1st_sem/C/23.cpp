#include<stdio.h>
int fact(int n){
	if(n<2){
		return 1;
	}
	return n*fact(n-1);
}
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("To define a fuction named fact() to calculate factorialm combination & permutation\n");
	int n,r;
	printf("Enter the total number of elements(n) & number of selection(r): ");
	scanf("%d%d",&n,&r);
	float permutation=fact(n)/fact(n-r);
	float combination=permutation/fact(r);
	printf("\nThe permutation is %f and the combination is %f",permutation,combination);
}
