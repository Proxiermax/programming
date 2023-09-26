#include <stdio.h>

int main()
{
    int num = 10000;
    int i = 2;
    printf("1");
    while (i < num)
    {
        if (num % i == 0)
        {
            printf(" + ");
            printf("%d", i);
        }
        i++;
    }
    return 0;
}