#include <stdio.h>

void function(int number)
{
    int i = 2;
    while (i <= number)
    {
        if (number % i == 0)
        {
            number = number / i;
            printf("%d ", i);
            if(i <= number){
                printf("X ");
            }
        }
        else
        {
            ++i;
        }
    }
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    printf("Factoring : ");
    function(number);
    return 0;
}