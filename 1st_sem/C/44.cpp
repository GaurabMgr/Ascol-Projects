//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    FILE *file;
    if (file = fopen("filec.txt", "w+")){
        while (ch != '\n')
        {
            ch=getc(stdin);
            putc(ch, file);
        }
    } else {
        printf("file operation failed");
    }
    fclose(file);
    printf("\nName: Gaurab Ale Magar");
    getch();
    return 0;
}
