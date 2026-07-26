#include<stdio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("To get input of two or higher digit integer number and display inverse order\n");
	int a,r,rev=0;
	printf("Enter a number with 2 or more digits: ");
	scanf("%d",&a);
	top:
		r=a%10;
		rev=rev*10+r;
		a=a/10;
		if(a!=0){
			goto top;
		}else{
			printf("\nThe reverse of the number is: %d",rev);
		}
}
