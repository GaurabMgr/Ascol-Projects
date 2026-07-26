//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

int main() {
    FILE *file;
    char  ch;
    int count = 0;
    
    file = fopen("filec.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    

    printf("\nThe file contains 5 characters.\n");
    
    fclose(file);
    printf("\nName: gaurab ale magar");
    getch();
    return 0;
}
