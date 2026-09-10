#include <stdio.h>
int main() {
    int arr[5] = {14, 25, 31, 42, 60};
    int *ptr = arr;
    printf("using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 5; 
    }
    printf("using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    printf("using array name:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
