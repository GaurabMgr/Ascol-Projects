#include <stdio.h>
#include <conio.h>

struct students {
    char name[40];
    char address[40];
    int roll;
    int avgmark;
} studs[12];

void structdisplayer(struct students studs[]) {
    printf("Name       Address    Roll No    Average Marks");
    for (int i=0;i<12;i++) {
        printf("\n%9s %9s %4d\t\t%4d", studs[i].name,studs[i].address, studs[i].roll,studs[i].avgmark);
    }
}
int main() {
	printf("Name: Gaurab Ale Magar\n");
    for (int i=0;i<12;i++) {
        fflush(stdin);
        printf("Student %d details: \n",i+1);
        printf("Enter the name of Student: ");
        gets(studs[i].name);
        printf("Enter the address of student: ");
        gets(studs[i].address);
        printf("Enter the Roll No of student: ");
        scanf("%d",&studs[i].roll);
        printf("Enter the average marks of student: ");
        scanf("%d",&studs[i].avgmark);
        printf("\n");
    }
    
    structdisplayer(studs);
    getch();
    return 0;
}
