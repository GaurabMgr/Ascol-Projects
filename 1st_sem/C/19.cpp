#include<stdio.h>
main()
{
	printf("Name: Gaurab Ale Magar\n");
	printf("Prime numbers between 1 and 100 by loop with break statement\n");
	int i,j,count;
	for(i=1;i<=100;i++){
		count=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
		}if(count==0 && i!=1){
			printf("%d\t",i);
		}
	}
}
