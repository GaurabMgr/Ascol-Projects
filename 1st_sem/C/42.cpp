//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

int main() {
    int data[5]={1,2,3,4,6};
    int *ptr=data;
    for(int i=0;i<5;i++) {
        printf("%d ",*ptr);
        ptr++;
    }
    printf("\nName: Gaurab Ale Magar");
    getch();
    return 0;
}
