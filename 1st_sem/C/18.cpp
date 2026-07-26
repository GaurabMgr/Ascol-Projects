#include<stdio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Finonacci series upto 300\n");
	int a=0,b=1,c;
	while(a<300){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}
