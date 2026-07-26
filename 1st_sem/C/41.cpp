//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char string[]="UNIVERSITY";
    for (int i=2;i<=strlen(string);i=i+2) {
        for (int j=0;j<i;j++) {
            printf("%c ",string[j]);
        }
        printf("\n");
    }
    for (int i=strlen(string)-2;i>=0;i=i-2) {
        for (int j=0;j<i;j++) {
            printf("%c ",string[j]);
        }
        printf("\n");
    }
    printf("\nName: Gaurab Ale Magar");
    getch();
    return 0;
}

