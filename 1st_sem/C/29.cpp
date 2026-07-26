
//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

int main() {
	printf("Name: Gaurab Ale Magar\nCheck for palindrome without using string related function\n");
    char strings[30],check;
    int length=0;
    printf("enter the string: ");
    gets(strings);
    for (int i=0;i<30;i++) {
        check=strings[i];
        if (check=='\0') {
            break;
        }
        length++;
    }
    for (int i=0;i<=(length/2);i++) {
        if(strings[i]!=strings[length-i-1]) {
            printf("\n not pallindrome.");
            break;
        } else if (i==length/2) {
            printf("\n pallindrome");
            break;
        }
    }

    getch();
    //return 0;
}
