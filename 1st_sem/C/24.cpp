#include<stdio.h>
int fibo(int n){
	if(n==1)
	return 1;
	else if(n==0)
	return 0;
	else
	return fibo(n-1)+fibo(n-2);
}
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Reursive fnction to general fibonacci series\n");
	int num;
	printf("Enter the number of terms: ");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		printf("%d\t",fibo(i));
	}
}
