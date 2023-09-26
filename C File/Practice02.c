#include <stdio.h>

void space(int num1, int num2){
    for(int i = 1; i <= num1; i++){
        for(int j = 1; j <= num2; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main (){
    int num1, num2;
    printf("the input : ");
    scanf("%d %d", &num1, &num2);
    printf("the output :\n");
    space(num1, num2);
    return 0;
}