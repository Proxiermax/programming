#include <stdio.h>

int main() {
    int num[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }
    
    int i, j, temp;
    int n = 8; 
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
  
    for(i = 0; i < n; i++){
      if(i == n - 2){
        printf("%d", num[i]);
      }
    }
    return 0;
}