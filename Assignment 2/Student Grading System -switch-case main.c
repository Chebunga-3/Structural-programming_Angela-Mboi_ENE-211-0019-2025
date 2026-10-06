#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Please enter the number of students (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int regNo;
        int marks;
        char Student_name[50];
        char grade;

        printf("\n--- Enter details for Student %d ---\n", i);

        printf("Registration Number: ");
        scanf("%d", &regNo);

        printf("Student Name: ");
        scanf("%s", &Student_name);

        printf("Marks: ");
        scanf("%d", &marks);

        switch (marks) {
            case 70 ... 100:
                grade = 'A';
                break;

            case 60 ... 69:
                grade = 'B';
                break;

            case 50 ... 59:
                grade = 'C';
                break;

            case 40 ... 49:
                grade = 'D';
                break;

            default:
                grade = 'F';
                break;
        }

        char *status = (marks >= 40) ? "Passed" : "Failed";

        printf("\n-----------------------------\n");
        printf("      STUDENT INFORMATION    \n");
        printf("-----------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Student Name: %s\n", Student_name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);
        printf("Status: %s\n", status);
        printf("-----------------------------\n");
    }

    return 0;
}
