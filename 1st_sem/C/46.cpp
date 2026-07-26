
//this program just write some comment here, to lazy to write anything.
#include <stdio.h>
#include <conio.h>

int main() {
    FILE *file;
    char outstring[41]; //41 for null character
    const char * strings[]={
        "Hello world this is my program on writin",
        "g 40 characters into a file and make sen",
        "se of it using the fputs() function div"
    };

    file = fopen("string.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        fputs(strings[i], file);
    }
    fclose(file);


    file = fopen("string.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fgets(outstring, 40+1, file)) {
        fputs(outstring,stdout);
    }

    fclose(file);
    printf("\nName: Gaurab Ale Magar");
    getch();
    return 0;
}
