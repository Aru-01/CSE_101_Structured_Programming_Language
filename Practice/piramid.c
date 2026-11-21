//  write a program to visualize a half piramid shape .
//     *
//    ***
//   *****

#include <stdio.h>
int main()
{
    int n ;
    scanf("%d", &n);

    // 1st half
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++) // j< n-i =1<2-0= 2<3
        {
            printf(" ");
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++) // j<2*i+1 = 0<2*0+1=0<1
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--)
    {
        // space
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }

        // stars
        for (int j = 2 * i + 1; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}