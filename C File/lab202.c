#include <stdio.h>

void divisor(int num1, int num2){
    int min = num1<num2 ? num1 : num2;
    for(int i = min; i >= 1; i--){
        if(num1%i == 0 && num2%i == 0){
            printf("%d", i);
            break;
        }
    }
}

int main(){
    int num1, num2;
    printf("Enter the first : ");
    scanf("%d", &num1);
    printf("Enter the second : ");
    scanf("%d", &num2);
    printf("Divisor : ");
    divisor(num1, num2);
    return 0;
}
