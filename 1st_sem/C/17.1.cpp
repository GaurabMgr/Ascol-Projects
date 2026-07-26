#include<stdio.h>
main()
{
    printf("Name: Gaurab Ale Magar\n");
	printf("Input 2 integer numbers and display sum of even numbers between them\n");
    int a, b, greater, lower, sum = 0;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    // Determine the greater and lower numbers
    if (a > b) {
        greater = a;
        lower = b;
    } else {
        greater = b;
        lower = a;
    }

    // Loop to find and sum the even numbers between 'lower' and 'greater'
    for (int i = greater; i >= lower; i--) {
        if (i % 2 == 0) {
            printf("\nEven num: %d", i);
            sum = sum + i;
        }
    }

    printf("\nThe sum of even numbers is %d", sum);
}

