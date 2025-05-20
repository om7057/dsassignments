#include <stdio.h>

int main() {
    int size, i;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

   
    int arr[size];

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secondMax = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("The second largest element is: %d\n", secondMax);

    return 0;
}
