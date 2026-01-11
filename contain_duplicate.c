//Contains Duplicate
//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
//Example 1:
//Input: nums=[1,2,3,1]
//Output:true
//Explanation:
//The element 1 occurs at the indices 0 and 3.
//Example 2:
//Input:nums=[1,2,3,4]
//Output:false

#include<stdio.h>
int main ()
{
int arr[5]={1,2,4,1,5};
int n = sizeof(arr)/sizeof(arr[0]);
int found;
for(int i=0; i<n;i++){
found=0;
for(int j=i+1;j<n-1; j++){
if(arr[i]==arr[j]){
printf("True");
return 0;
 }
}
 }
printf("False");
return 0;
}
