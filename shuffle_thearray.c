#include <stdio.h>

int main() {
    int size;

    printf("Enter size of array (even number): ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int n = size / 2;

    printf("Shuffled array: ");
    for (int i = 0; i < n; i++) {
        printf("%d %d ", arr[i], arr[i + n]);
    }

    printf("\n");
    return 0;
}
