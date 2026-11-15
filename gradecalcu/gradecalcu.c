
#include <stdio.h>

int main() {

    float prelim, midterm, semifinals, finals;
    float finalGrade;
    

    printf("===== COLLEGE GRADE CALCULATOR =====\n\n");

        printf("Enter your Prelim Grade: ");
        scanf("%f", &prelim);

        printf("Enter your Midterm Grade: ");
        scanf("%f", &midterm);

        printf("Enter your Semi-finals Grade: ");
        scanf("%f", &semifinals);

        printf("Enter your Finals Grade: ");
        scanf("%f", &finals);

    finalGrade = (prelim * 0.25) + (midterm * 0.25)
               + (semifinals * 0.25) + (finals * 0.25);

    printf("\n===== FINAL RESULT =====\n");

    printf("Prelim: %.2f\n", prelim);
    printf("Midterm: %.2f\n", midterm);
    printf("Semi-finals: %.2f\n", semifinals);
    printf("Finals: %.2f\n", finals);

    printf("\nFinal Grade: %.2f", finalGrade);

    if (finalGrade <= 1.00) {
        printf(" Excellent!");
    }
    else if (finalGrade <= 1.25) {
        printf(" Outstanding!");
    }
    else if (finalGrade <= 1.75) {
        printf(" Very Good!");
    }
    else if (finalGrade <= 2.50) {
        printf(" Good!");
    }
    else if (finalGrade <= 3.00) {
        printf(" Passed!");
    }
    else {
        printf(" Failed!");
    }

    printf("\n");

    return 0;
}
