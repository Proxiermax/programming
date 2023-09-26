#include <stdio.h>
#include <string.h>

int find_substring(const char* str, const char* sub) {
    int len_str = strlen(str);
    int len_sub = strlen(sub);
    printf("%d\n", len_str);
    printf("%d\n", len_sub);

    for (int i = 0; i <= len_str - len_sub; i++) {
        int j;
        for (j = 0; j < len_sub; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }
        if (j == len_sub) {
            return i;
        }
    }

    return -1; // Return -1 if the substring is not found
}

int main() {
    const char* str1 = "Hello World";
    const char* sub1 = "Hello";
    int index1 = find_substring(str1, sub1);

    if (index1 != -1) {
        printf("Substring found at index %d\n", index1);
    } else {
        printf("Substring not found\n");
    }

    const char* str2 = "OpenAI amazing is";
    const char* sub2 = "is";
    int index2 = find_substring(str2, sub2);

    if (index2 != -1) {
        printf("Substring found at index %d\n", index2);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}