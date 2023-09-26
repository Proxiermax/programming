#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
FILE* fp;
int x1 = 100;
int x2 = 300;
int x3 = 500;
fp = fopen("mytestfile.txt", "w");
fprintf(fp, "%d %d %d\n", x1, x2, x3);
fclose(fp);
return 0;
}