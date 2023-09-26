#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int main(){
    FILE *fptr;
    int noffset;
    struct player {
    char name[20];
    int level;
    int score;
    } p[5];

    fptr = fopen("ProFun_binary_file.txt", "w");

    for (int i = 0; i < 5; i++) {
        printf("Enter name0%d : ", i+1);
        scanf("%s", p[i].name);
        printf("Enter level0%d : ", i+1);
        scanf("%d", &p[i].level);
        printf("Enter score0%d : ", i+1);
        scanf("%d", &p[i].score);
    }

    fwrite(p, sizeof(struct player), 5, fptr);
    fclose(fptr);

    fptr = fopen("ProFun_binary_file.txt", "r");

    for(int i = 0; i < 5; i++){
        noffset = i * sizeof(struct player);
        if (fseek( fptr, noffset, 0) == 0 )
        {
            if (fread(&p,sizeof(struct player),1,fptr) != 0)
            {
                printf("Name0%d  : %s\t", i+1, p[i].name);
                printf("Level0%d : %d\t", i+1, p[i].level);
                printf("Score0%d : %d\n", i+1, p[i].score);
            }
        }
    }

    fclose(fptr);
    return 0;
}