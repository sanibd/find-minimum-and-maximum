#include <stdio.h>
int main()
{
    // C program to find maximum between three numbers
    int num1, num2, num3, max, min;
    printf("\n");
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    printf("Enter the third number : ");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            max = num1;
            if (num2 > num3)
            {
                min = num3;
            }
            else
            {
                min = num2;
            }
        }
        else
        {
            max = num3;
            min = num2;
        }
    }
    else if (num2 > num3)
    {
        max = num2;
        if (num1 > num3)
        {
            min = num3;
        }
        else
        {
            min = num1;
        }
    }
    else
    {
        max = num3;
        min = num1;
    }
    printf("\nThe maximum number is : %d\n", max);
    printf("The minimum number is : %d\n", min);
    printf("\nDeveloped by Rabius Sany..\n");
    return 0;
}
