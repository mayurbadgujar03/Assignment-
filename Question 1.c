//1
#include <stdio.h>

int main() {
    int arr[10];
    int i;

    
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("Elements in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
