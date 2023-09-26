#include <stdio.h>

int main(){
    int num[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4; j++){
            if(num[i] > num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    int middle01 = num[1];
    int middle02 = num[2];
    int result;
    result = middle01 + middle02;
    printf("result : %d", result);

    return 0;
}