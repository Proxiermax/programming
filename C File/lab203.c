#include <stdio.h>

void box(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= x; j++){
            if(i != 1 && i != x){
                if(j != 1 && j != x){
                    printf(" ");
                }else{
                    printf("*");
                }
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}

int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("The output :\n");
    box(x);
    return 0;
}