//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
};

struct student funct(struct student studs) {
    strcpy(studs.name,"Gaurab");
    studs.roll=15;
    return studs;
} 

int main() {
	printf("Name: Gaurab Ale Magar\n");
    struct student stud;
    printf("\nEnter the name: ");
    gets(stud.name);
    printf("\nEnter the roll: ");
    scanf("%d",&stud.roll);

    struct student stud1=funct(stud);
    printf("\nThe values of the returned structure is:");
    printf("\nName: %s\nRoll: %d",stud1.name,stud1.roll);

    getch();
    return 0;
}
