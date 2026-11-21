// costruct a program using the folowing conditions:
// i. if any student gets 60% or more than 60% number of total mark then he will get Nimur Love.
// ii. if any student gets less than 60% number of total number then he will get imtiaz care.

#include <stdio.h>
int main()
{
    float student_mark, total_mark;
    printf("Please Enter Student mark and Total mark: ");
    scanf("%f %f", &student_mark, &total_mark);

    if ((total_mark * 0.6) <= student_mark)
    {
        printf("He will must be get Nimur Love\n");
    }
    else
    {
        printf("He will must be get Imtiaz er gf\n");
    }

    return 0;
}