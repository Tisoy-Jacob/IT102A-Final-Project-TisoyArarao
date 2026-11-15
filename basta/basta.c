
#include <stdio.h>

int main() {

    int operation;
    int pattern;
    char confirm;
    int rows, i, j;
    float grade;
    char str[100];
    int length = 0;
    int k;
    int isPalindrome = 1;

    // MAIN MENU LOOP
    do {

        printf("\n========================================\n");
        printf("          MAIN MENU\n");
        printf("========================================\n");
        printf("1. Pattern Generator\n");
        printf("2. Pascal's Triangle\n");
        printf("3. Grade Calculator & Evaluation\n");
        printf("4. Palindrome Checker\n");
        printf("5. Start New Session / Exit\n");
        printf("========================================\n");

        printf("Which operation do you want to perform? ");
        scanf("%d", &operation);


        // PATTERN GENERATOR (1)
        if (operation == 1) {

            printf("You selected Pattern Generator? (1 for Yes, 0 for No)\n");
            scanf(" %c", &confirm);

            if (confirm == '1') {

                printf("Which pattern do you want to generate?\n");
                printf("1. Right Triangle\n");
                printf("2. Square\n");
                printf("3. Isosceles Triangle\n");
                printf("4. Inverted Right Triangle\n");
                printf("5. Christmas Tree\n");

                scanf("%d", &pattern);

                if (pattern == 1) {

                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);

                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= i; j++) {
                            printf("* ");
                        }
                        printf("\n");
                    }

                } else if (pattern == 2) {

                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);

                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= rows; j++) {
                            printf("* ");
                        }
                        printf("\n");
                    }

                } else if (pattern == 3) {

                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);

                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= rows - i; j++) {
                            printf(" ");
                        }

                        for (j = 1; j <= 2 * i - 1; j++) {
                            printf("*");
                        }

                        printf("\n");
                    }

                } else if (pattern == 4) {

                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);

                    for (i = rows; i >= 1; i--) {
                        for (j = 1; j <= rows - i; j++) {
                            printf(" ");
                        }

                        for (j = 1; j <= i; j++) {
                            printf("*");
                        }

                        printf("\n");
                    }

                } else if (pattern == 5) {

                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);

                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= rows - i; j++) {
                            printf(" ");
                        }

                        for (j = 1; j <= 2 * i - 1; j++) {
                            printf("*");
                        }

                        printf("\n");
                    }

                    for (i = 1; i <= 3; i++) {
                        for (j = 1; j < rows; j++) {
                            printf(" ");
                        }

                        printf("*\n");
                    }

                } else {
                    printf("Invalid pattern selected.\n");
                }

            } else if (confirm == '0') {

                printf("Returning to Main Menu.\n");

            } else {

                printf("Invalid input. Please enter 1 for Yes or 0 for No.\n");

            }


        // PASCAL'S TRIANGLE (2)
        } else if (operation == 2) {

            printf("You selected Pascal's Triangle? (1 for Yes, 0 for No)\n");
            scanf(" %c", &confirm);

            if (confirm == '1') {

                printf("Enter the number of rows for Pascal's Triangle: ");
                scanf("%d", &rows);

                for (i = 0; i < rows; i++) {

                    int num = 1;

                    for (j = 0; j < rows - i - 1; j++) {
                        printf("  ");
                    }

                    for (j = 0; j <= i; j++) {
                        printf("%4d", num);
                        num = num * (i - j) / (j + 1);
                    }

                    printf("\n");
                }

            } else if (confirm == '0') {

                printf("Returning to Main Menu.\n");

            } else {

                printf("Invalid input. Please enter 1 for Yes or 0 for No.\n");

            }


        // GRADE CALCULATOR (3)
        } else if (operation == 3) {

            printf("You selected Grade Calculator & Evaluation? (1 for Yes, 0 for No)\n");
            scanf(" %c", &confirm);

            if (confirm == '1') {

                printf("Enter your grade (1.00 - 5.00): ");
                scanf("%f", &grade);

                if (grade < 1.00 || grade > 5.00) {

                    printf("Invalid grade. Please enter a grade between 1.00 and 5.00.\n");

                } else if (grade == 1.00) {

                    printf("You're Definitely Going to Make it Far!\n");

                } else if (grade <= 1.01) {

                    printf("Well Done!\n");

                } else if (grade <= 1.99) {

                    printf("Still Uno! Good Job!\n");

                } else if (grade <= 2.00) {

                    printf("Not bad!\n");

                } else if (grade <= 2.99) {

                    printf("Still Passed!\n");

                } else if (grade <= 3.00) {

                    printf("You just made the cut!\n");

                } else {

                    printf("You've failed.\n");

                }

            } else if (confirm == '0') {

                printf("Returning to Main Menu.\n");

            } else {

                printf("Invalid input. Please enter 1 for Yes or 0 for No.\n");

            }


        // PALINDROME CHECKER (4)
        } else if (operation == 4) {

            printf("You selected Palindrome Checker? (1 for Yes, 0 for No)\n");
            scanf(" %c", &confirm);

            if (confirm == '1') {

                printf("Enter a string: ");
                scanf("%99s", str);

                // RESET PALINDROME STATUS
                isPalindrome = 1;

                // GET STRING LENGTH
                for (length = 0; str[length] != '\0'; length++);

                // CHECK IF PALINDROME
                for (k = 0; k < length / 2; k++) {

                    if (str[k] != str[length - k - 1]) {

                        isPalindrome = 0;
                        break;

                    }
                }

                if (isPalindrome) {

                    printf("The string is a palindrome.\n");

                } else {

                    printf("The string is not a palindrome.\n");

                }

            } else if (confirm == '0') {

                printf("Returning to Main Menu.\n");

            } else {

                printf("Invalid input. Please enter 1 for Yes or 0 for No.\n");

            }


        // EXIT PROGRAM (5)
        } else if (operation == 5) {

            printf("Thank you for using the program!\n");
            printf("Hope to see you again!\n");

        } else {

            printf("Invalid operation selected.\n");

        }

    // REPEAT MAIN MENU UNTIL OPERATION 5
    } while (operation != 5);

    return 0;
}
