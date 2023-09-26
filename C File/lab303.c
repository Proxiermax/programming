#include <stdio.h>

void func(int num)
{
    for (int i = 1; i <= (2 * num) - 1; i++)
    {
        for (int j = 1; j <= (2 * num) - 1; j++)
        {
            if (i < num)
            {
                if (j <= i || j >= (2 * num) - i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            if (i == num)
            {
                printf("* ");
            }
            if (i > num)
            {
                if (j <= (2 * num) - i || j >= i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Enter the scale : ");
    scanf("%d", &num);
    func(num);
    return 0;
}