// Rotate Array
// n integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation: 
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:
// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

#include<stdio.h>
int main ()
{
int size;
printf("enter the size of array: ");
scanf("%d",&size);

int arr[size];
printf("Enter the array of size %d: ",size);
for(int i=0;i<size;i++){
    scanf(" %d",&arr[i]);
}

int k;
printf("enter the frequency of rotation: ");
scanf("%d",&k);

int temp_arr[size];

printf("\n Original Array:\n ");
printf("[");
for(int i=0;i<size;i++){
    printf(" %d",arr[i]);
}
printf("]");


for(int i=0 ; i<size ; i++){
    temp_arr[(i+k)%size]=arr[i];
}
for(int i=0;i<size;i++){
    arr[i]=temp_arr[i];
}
printf("\n Rotated array:\n");
printf("[");
for(int i=0;i<size;i++){
    printf(" %d", arr[i]);
}
printf("]");
return 0;
}