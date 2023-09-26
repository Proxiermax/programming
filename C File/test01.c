#include <stdio.h>
#include <math.h>

int main(){
    int num[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(num[i] > num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Sorting : ");
    for (int i = 0; i < 3; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
    int most = num[2];
    int less01 = num[0];
    int less02 = num[1];
    printf("%d\n", most);
    printf("%d\n", less01);
    printf("%d\n", less02);
    int z = most*most;
    int x = less01*less01;
    int y = less02*less02;
    printf("%d\n", z);
    printf("%d\n", x);
    printf("%d\n", y);
    if(z == x + y){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}