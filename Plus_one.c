/*66. Plus One
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:
Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0]. */
 
#include <stdio.h>

int main() {

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printf("[ ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    // Plus One Logic
    for(int i = size - 1; i >= 0; i--) {
        if(arr[i] < 9) {
            arr[i]++;
            break;
        } else {
            arr[i] = 0;
        }
    }

    // Result
    if(arr[0] == 0) {
        printf("[");
        printf("Result: 1 ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("]");
    } else {
        printf("Result: ");
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
