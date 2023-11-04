//1
#include <stdio.h>

int main() {
    int arr[10]; // Declare an array of size 10 to store the elements
    int i;

    // Input: Read 10 elements from the user
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the elements in reverse order
    printf("Elements in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
