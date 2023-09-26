#include <stdio.h>

void func(int info){
for(int i = 1; i <= info; i++){
    for(int j = 1; j <= info; j++){
        if(i % 2 == 1){
            if(j % 2 == 1){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        else if(i % 2 == 0){
            if(j % 2 == 1){
                printf("-");
            }
            else{
                printf("*");
            }
        }
        }
        printf("\n");
    }
}

int main (){
    int info;
    printf("the input : ");
    scanf("%d", &info);
    printf("the output :\n");
    func(info);
    return 0;
}