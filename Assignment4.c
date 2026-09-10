#include <stdio.h>
int main() {
    int num = 213;
    int *ptr = &num;
    int **doubleptr = &ptr;
    printf("Value using pointer: %d\n", *ptr);
    printf("Value using double pointer: %d\n", **doubleptr);
    return 0;
}
