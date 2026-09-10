#include <stdio.h>
int main() {
    int value = 42;
    int *ptr = &value;
    printf("Address of variable (using &): %p\n", (void*)&value);
    printf("Address of variable (using ptr): %p\n", (void*)ptr);
    *ptr = 100;
    printf("New value of the integer: %d\n", value);
    return 0;
}
