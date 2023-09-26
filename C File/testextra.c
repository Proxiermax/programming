#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

struct student {
    char id[10];
    char name[50];
    int age;
};

int main() {
    int i;
    struct student s[3], *stu;

    for (i = 0; i < 3; i++) {
        printf("Enter id %d : ", i + 1);
        scanf("%s", s[i].id);

        printf("Enter name %d : ", i + 1);
        getchar();
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;
        
        printf("Enter age %d : ", i + 1);
        scanf("%d", &s[i].age);
        printf("--------------------\n");
    }

    stu = s;
    for (i = 0; i < 3; i++) {
        printf("ID : %s\t", stu->id);
        printf("Name : %s\t", stu->name);
        printf("Age : %d\n", stu->age);
        stu++;
    }

    return 0;
}