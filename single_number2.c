// 137. Single Number II
// Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
// Example 1:
// Input: nums = [2,2,3,2]
// Output: 3
// Example 2:
// Input: nums = [0,1,0,1,0,1,99]
// Output: 99

#include<stdio.h>
int main ()
{
int arr[7]={4,5,4,6,6,4,6};
int ones=0;
int tows=0;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i =0 ; i<n;i++){
    ones=(ones^arr[i]) & ~tows;
    tows=(tows^arr[i]) & ~ones;
}
printf("the single number is %d",ones);
return 0;
}
