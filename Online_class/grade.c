// A university wants to develop a program to analyze students' academic performance. Write a C program that takes the marks of 5 students in 4 different courses. After taking all the marks, the program should allow the user to select a specific course and display how many students received each grade (A+, A, A-, B, C, D, and F) in that course.

#include <stdio.h>

int main()
{
    int code[20], marks[20];
    int grade[7] = {0};

    int i, j, searchCode, found = 0;

    char *g[] = {"A+", "A", "A-", "B", "C", "D", "F"};

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 4; j++)
        {
            // printf("Enter course code: ");
            scanf("%d", &code[i * 4 + j]);

            // printf("Enter marks: ");
            scanf("%d", &marks[i * 4 + j]);
        }
    }

    printf("\nEnter course code: ");
    scanf("%d", &searchCode);

    for (i = 0; i < 20; i++)
    {
        if (code[i] == searchCode)
        {
            found++;

            if (marks[i] >= 80)
                grade[0]++;
            else if (marks[i] >= 75)
                grade[1]++;
            else if (marks[i] >= 70)
                grade[2]++;
            else if (marks[i] >= 60)
                grade[3]++;
            else if (marks[i] >= 50)
                grade[4]++;
            else if (marks[i] >= 40)
                grade[5]++;
            else
                grade[6]++;
        }
    }

    // Displaying result

    if (found == 0)
    {
        printf("Course not found!\n");
    }
    else
    {
        printf("\nGrade Distribution of Course %d:\n", searchCode);

        for (i = 0; i < 7; i++)
        {
            printf("%s = %d\n", g[i], grade[i]);
        }

        printf("Total Students = %d\n", found);
    }

    return 0;
}
