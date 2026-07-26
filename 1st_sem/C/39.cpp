//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

int main() {
    fflush(stdin);
    char string1[]="Copying",check;
    int length=0;
    for (int i=0;i<30;i++) {
        check=string1[i];
        if (check=='\0') {
            break;
        }
        length++;
    }
    char *ptr=string1,string2[length];;
    for (int i=0;i<length;i++) {
        string2[i]=*ptr;
        ptr++;
    }
    printf("\nThe value of string copied is : %s",string2);
    printf("\nName: Gaurab Ale Magar");
    getch();
    return 0;
}
