#include<stdio.h>
main()
{
	int a,b,c;
	printf("Name: Gaurab Ale Magar\n");
	printf("Program to find the largest and smallest among 3 numbers and to check the displayed number is even or odd\n");
	printf("Enter any 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			if(a%2==0){
				printf("\n%d is the largest and even number",a);
			}else{
				printf("\n%d is the largest and odd number",a);
			}
		}else if(c>a){
			if(c%2==0){
				printf("\n%d is the largest and even numer",c);
			}else{
				printf("\n%d is the largest and odd number",c);
			}
		}	
	}else if(b>c){
		if(b%2==0){
			printf("\n%d is the largest and even number",b);
		}else{
			printf("\n%d is the largest and odd number",b);
		}
	}else{
		if(c%2==0){
			printf("\n%d is the largest and even number",c);
		}else{
			printf("\n%d is the largest and odd number",c);
		}
	}
	if(a<b){
		if(a<c){
			if(a%2==0){
				printf("\n%d is the smallest and even number",a);
			}else{
				printf("\n%d is the smallest and odd number",a);
			}
		}else if(c<a){
			if(c%2==0){
				printf("\n%d is the smallest and even numer",c);
			}else{
				printf("\n%d is the smallest and odd number",c);
			}
		}	
	}else if(b<c){
		if(b%2==0){
			printf("\n%d is the smallest and even number",b);
		}else{
			printf("\n%d is the smallest and odd number",b);
		}
	}else{
		if(c%2==0){
			printf("\n%d is the smallest and even number",c);
		}else{
			printf("\n%d is the smallest and odd number",c);
		}
	}
}
