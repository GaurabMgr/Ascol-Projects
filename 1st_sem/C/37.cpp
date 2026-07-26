
#include <stdio.h>
#include <conio.h>

struct Book {
    char Title[50];
    char Author[50];
    int publication_year;
} bk;

int main() {
	printf("Name:Gaurab Ale Magar\n");
	struct Book *books;
    books=&bk;
    printf("Enter the Title of Book: ");
    gets(books->Title);
    printf("Enter the Author of Book: ");
    gets(books->Author);
    printf("Enter the publication Year: ");
    scanf("%d",&books->publication_year);

    printf("\nBook Details:\n");
    printf("Title of Book: %s",books->Title);
    printf("\nAuthor of Book: %s",books->Author);
    printf("\nPublication Year: %d",books->publication_year);
    getch();
    return 0;
}

