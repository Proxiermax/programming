#include <stdio.h>

void graphic(int number){
    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main (){
    int number;
    printf("the input : ");
    scanf("%d", &number);
    printf("the output :\n");
    graphic(number);
    return 0;
}