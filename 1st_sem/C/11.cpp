#include<stdio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	int x=6,y=3;
	printf("\tx\t\ty\t\texpressions\tresults\t");
	printf("\n\t%d\t|\t%d\t|\tx=y+3\t|\tx=%d",x,y,y+3);
	printf("\n\t%d\t|\t%d\t|\tx=y-2\t|\tx=%d",x,y,y-2);
	printf("\n\t%d\t|\t%d\t|\tx=y*5\t|\tx=%d",x,y,y*5);
	printf("\n\t%d\t|\t%d\t|\tx=x/y\t|\tx=%d",x,y,(x/y));
	printf("\n\t%d\t|\t%d\t|\tx=x%y\t|\tx=%d",x,y,x%y);
}
