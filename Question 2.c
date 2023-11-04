#include <stdio.h>

int main() {
    int arr[5]; 
    int i;
    int max;

    
    printf("Enter 5 integer elements:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    max = arr[0];

    // Find the maximum element in the array
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output: Display the maximum number
    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
