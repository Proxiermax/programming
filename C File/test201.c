#include <stdio.h>

int main(){
    int num[10], odd[10], even[10];
    int i, n = 0, m = 0;

    for(i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        if(num[i] == 0){
            break;
        }
        if(num[i] % 2 == 1){
            odd[n] = num[i];
            n++;
        }
        else{
            even[m] = num[i];
            m++;
        }
    }

    printf("\nOdd : ");
    for(i = 0; i < n; i++){
        printf("%d ", odd[i]);
    }

    printf("\nEven : ");
    for(i = 0; i < m; i++){
        printf("%d ", even[i]);
    }

    return 0;
}