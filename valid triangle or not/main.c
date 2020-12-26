/* Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.
Author Majid Mujahid Hussain dated 23 December 2020. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angle_1 = 0, angle_2 = 0, angle_3 = 0, Sum = 0;

    printf("Hello world!\n");
    printf("\n Please enter the FIRST angle:\n");
    scanf("%d", &angle_1);

    printf("\n Please enter the SECOND angle:\n");
    scanf("%d", &angle_2);

    printf("\n Please enter the THIRD angle:\n");
    scanf("%d", &angle_3);

    Sum = angle_1 + angle_2 + angle_3;

    //checking the validity of the triangle
    if( Sum == 180)
    {
        printf("The triangle with the angles '%d', '%d', '%d' is valid.",angle_1, angle_2, angle_3);
    }
    else
    {
             printf("The triangle with the angles '%d', '%d', '%d' is invalid.",angle_1, angle_2, angle_3);

    }
    return 0;
}
