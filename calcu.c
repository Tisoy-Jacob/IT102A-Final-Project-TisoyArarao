#include <stdio.h>
int main() {

    int operation;
    char confirm;
    int rows, i, j;
    float prelim, midterm, semifinals, finals;
    float finalGrade;
    char str[100];
    int length = 0;
    int k;
    int isPalindrome = 1;

    do {

        printf("Which operation do you want to perform? (1. Pattern Generator, 2. Pascal's Triangle, 3. Grade Calculator & Evaluation, 4. Palindrom Checker, 10. End Session)\n");
        scanf("%d", &operation);


        if (operation == 1) {

        printf("You selected Pattern Generator? (1 for Yes, 0 for No)\n");
        scanf(" %c", &confirm);

        if (confirm == '1') {
            printf("Which pattern do you want to generate? (1. Right Triangle, 2. Square, 3.Isosceles Triangle, 4. Inverted Right Triangle, 5. Christmas Tree)\n");
            scanf("%d", &operation);
                if (operation == 1) {
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);

                    for (i = 1; i <= rows; i++) {
                        for (j = 1; j <= i; j++) {
                            printf("* ");
                        }
                        printf("\n");
                    }
                    
                } else if (operation == 2) {
                    printf("Enter the number of rows: ");
                        scanf("%d", &rows);
                for (i = 1; i <= rows; i++) {
                    for (j = 1; j <= rows; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }


                //3.Isosceles Triangle, 4. Inverted Right Triangle, 5. Christmas Tree)
            } else if (operation == 3) {

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

            } else if (operation == 4) {

                printf("Enter the number of rows: ");
                scanf("%d", &rows);

                for (i = rows; i >= 1; i--) {
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }
                printf("\n");
            }

            } else if (operation == 5) {
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
        printf("Re-run code.\n");
        
        } else {
        printf("Invalid input. Please enter '1' for Yes or '0' for No.\n");
        }





// para ni sa pascals (2)
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
            printf("Re-run code.\n");
        } else {
            printf("Invalid input. Please enter '1' for Yes or '0' for No.\n");
        }
        



        // para ni sa grade calculator(3)

        } else if (operation == 3) {
     
        printf("You selected Grade Calculator & Evaluation? (1 for Yes, 0 for No)\n");
        scanf(" %c", &confirm);

        if (confirm == '1') {
        
    
        
            printf("Enter your Prelim Grade: ");
            scanf("%f", &prelim);

            printf("Enter your Midterm Grade: ");
            scanf("%f", &midterm);

            printf("Enter your Semi-finals Grade: ");
            scanf("%f", &semifinals);

            printf("Enter your Finals Grade: ");
            scanf("%f", &finals);


            finalGrade = (prelim * 0.25) + (midterm * 0.25) + (semifinals * 0.25) + (finals * 0.25);

           
        
               
            printf("Prelim: %.2f\n", prelim);
            printf("Midterm: %.2f\n", midterm);
            printf("Semi-finals: %.2f\n", semifinals);
            printf("Finals: %.2f\n", finals);

            printf("\nFinal Grade: %.2f", finalGrade);


            if (finalGrade <= 1.00) {

                printf("\nRemarks: Excellent!\n");
        
            } else if (finalGrade <= 1.25) {

                printf("\nRemarks: Outstanding!\n");
            
            } else if (finalGrade <= 1.75) {
            
                printf("\nRemarks: Very Good!\n");

            } else if (finalGrade <= 2.50) {

                printf("\nRemarks: Good!\n");

            } else if (finalGrade <= 3.00) {

                printf("\nRemarks: Passed!\n");

            } else {

                printf("\nRemarks: Failed!\n");
            }


        } else if (confirm == '0') {

            printf("Re-run code.\n");

        } else {

            printf("Invalid input. Please enter '1' for Yes or '0' for No.\n");
        }


        // para sa palindrom checker(4)

        } else if (operation == 4) {
    
        printf("You selected Palindrome Checker? (1 for Yes, 0 for No)\n");
        scanf(" %c", &confirm);

        if (confirm == '1') {

            printf("Enter a string: ");
            scanf("%99s", str);

            for (length = 0; str[length] != '\0'; length++);

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

                 printf("Re-run code.\n");

        } else {

                printf("Invalid input. Please enter '1' for Yes or '0' for No.\n");
        }

        } else if (operation == 10) {

        printf("Ended session. Hope to see you again!\n");
         
        } else {
        printf("Invalid operation selected.\n");
        }
     } while (operation != 10   );

    return 0;
}


//FOR LOOP
//for (initialization; condition; update/updation)
//for (i = 1; i <= 5; i++, i--) 

// data types (VARIABLES)
// array of characters   > char[]  > %s
// characters - a,b,c    > char    > %c
// integer s- numbers    > int     > %d
// float - may decimal   > float   > %f
// double - long deci (7)> double  > %lf

// arithmetic operators
// + - * / %       > "%d"

// Comparison Operators:
// 1 True, 0 False
// Equal to ==
// Not Equal to !=
// Greatertan >
// Lesstan <
// Greatertan or Equal to >=
// Lesstan or Equal to <=

// 1 True, 0 False
// Logical Operators
// and  > && (both should be delivered)
// or   > || (either one)
// not  > !  (not)

// Conditional Statements: used when making a decision.