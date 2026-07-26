#include <stdio.h>
#include <conio.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    float height;

    file = fopen("string.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Personal Details: ");
    printf("Enter the name of the person: ");
    gets(name);
    printf("Enter the age of the person: ");
    scanf("%d",&age);
    printf("Enter the height in feet of the person: ");
    scanf("%f",&height);

    fprintf(file,"%s|%d|%f",name,age,height);
    fclose(file);

    

    file = fopen("string.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nRead Personal Details: ");
    fscanf(file,"%[^|]s|%d|%f",name,&age,&height);
    printf("\nName: %s\nAge: %d\nHeight: %.2f",name,age,height);
    fclose(file);
    printf("\nName: Gaurab Ale Magar");
    getch();
    return 0;
}
