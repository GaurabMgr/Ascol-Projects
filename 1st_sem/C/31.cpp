#include <stdio.h>
#include <conio.h>

struct company {
    char name[40];
    char address[40];
    int phone;
    int noOfEmployee;
} cmp1;

int main() {
	printf("Name:Gaurab Ale Magar");
    printf("\nEnter the name of company: ");
    gets(cmp1.name);
    printf("Enter the address of company: ");
    gets(cmp1.address);
    printf("Enter the phone of company: ");
    scanf("%d",&cmp1.phone);
    printf("Enter the no of employees of company: ");
    scanf("%d",&cmp1.noOfEmployee);

    printf("\nCompany Details:");
    printf("\nName: %s",cmp1.name);
    printf("\nAddress: %s",cmp1.address);
    printf("\nPhone: %d",cmp1.phone);
    printf("\nNo of Employees: %d",cmp1.noOfEmployee);
    getch();
    return 0;
}

