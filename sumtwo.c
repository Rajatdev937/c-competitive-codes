// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
/*
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/

#include <stdio.h>
int main()
{
int count=0;
int n;
printf("enter the size of array: ");
scanf("%d",&n);
int arr[n];
printf("enter array: ");
for(int i = 0; i < n ; i++){
    scanf("%d",&arr[i]);
};
int sum;
printf("enter a target value: ");
scanf("%d",&sum);

for(int i=0 ; i<n ; i++){
    for(int j=i+1 ; j< n ; j++){
        if(arr[i]+arr[j] == sum){
        printf("Pair Found! : (%d,%d)",arr[i],arr[j]);
        count++;}
    }
}
if(count != 1)
printf("no pair founded");
return 0;
}