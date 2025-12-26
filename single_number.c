// 136.Single Number
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example 1:
// Input: nums = [2,2,1]
// Output: 
// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4

#include<stdio.h>
int main ()
{
int arr[5]={2,1,1,3,2};
int n=sizeof(arr)/sizeof(arr[0]);
int xor=0;
int i;

for(i=0;i<n;i++){
xor^=arr[i];
}
printf("Single number in array is %d",xor);
return 0;
}