#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

struct player {
    char name[20];
    int level;
    int score;
};

int main() {
    FILE* fp;
    struct player p[5];
    fp = fopen("ProFun_text_file.txt", "w");

    for (int i = 0; i < 5; i++) {
        printf("Enter name : ");
        scanf("%s", p[i].name);
        printf("Enter level : ");
        scanf("%d", &p[i].level);
        printf("Enter score : ");
        scanf("%d", &p[i].score);
    }

    for (int i = 0; i < 5; i++) {
        fprintf(fp, "Name : %s\t", p[i].name);
        fprintf(fp, "Level : %d\t", p[i].level);
        fprintf(fp, "Score : %d\n", p[i].score);
    }

    fclose(fp);
    return 0;
}