#include <stdio.h>
#include <stdlib.h>

int main()
{
     int N;

    printf("Enter the number of students (N): ");
    scanf("%d", &N);

        for (int i = 1; i <= N; i++) {
        int regNo;
        int marks;
        char student_name[50];
        char grade;

        printf("\n--- Enter details for Student %d ---\n", i);
        printf("Registration Number: ");
        scanf("%d", &regNo);
        printf("Student Name: ");
        scanf("%s",student_name);
        printf("Marks: ");
        scanf("%d", &marks);

        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 60 && marks <= 69) {
            grade = 'B';
        } else if (marks >= 50 && marks <= 59) {
            grade = 'C';
        } else if (marks >= 40 && marks <= 49) {
            grade = 'D';
        } else {
            grade = 'F';
            }


        char *status = (marks >= 40) ? "Passed" : "Failed";
        printf("\n-----------------------------\n");
        printf("      STUDENT INFORMATION    \n");
        printf("-----------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", student_name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);
        printf("Status: %s\n", status);
        printf("-----------------------------\n");
    }

    return 0;
}
