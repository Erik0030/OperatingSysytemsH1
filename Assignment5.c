#include <stdio.h>
int main() {
    char str[] = "Hello";
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    char *start = str;
    char *end = str;
    
    while (*end != '\0') {
        end++;
    }
    count = end - start;
    printf("Number of characters: %d\n", count);
    return 0;
}

