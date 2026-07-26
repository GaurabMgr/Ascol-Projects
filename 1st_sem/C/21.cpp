#include<stdio.h>
main()
{
	printf("Nme: Gaurab Ale Magar\n");
	for(int i=1;i<=5;i++){
		int temp=i;
		printf("%d\t",temp);
		for(int j=5;j>i;j--){
			printf("%d\t",temp=temp+j);			
		}
		printf("\n");
	}
}
