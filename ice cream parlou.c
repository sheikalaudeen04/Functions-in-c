#include <stdio.h>
#include <stdlib.h>
int DM() {
    int ch;
    printf("Welcome to the Ice Cream Parlor!\n");
    printf("1. Vanilla Ice Cream - $2\n");
    printf("2. Chocolate Ice Cream - $2\n");
    printf("3. Strawberry Ice Cream - $2\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}
int main() {
    int ch, q;
    float tc = 0;
    do {
        ch = DM();

        switch (ch) {
            case 1:
            case 2:
            case 3:
                printf("Enter q: ");
                scanf("%d", &q);
                if (q < 0) {
                    printf("Invalid quantity. Please enter a positive number.\n");
                    continue;
                }
                tc += q * 2; 
                printf("Added %d scoops to your order.\n", q);
                break;
            case 4:
                printf("Thank you for visiting! Your total bill is: $%.2f\n", tc);
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (ch != 4);

    return 0;
}

