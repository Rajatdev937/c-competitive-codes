/*413. Second Maximum Number
Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
Example 1:
Input: nums = [3,2,1]
Output: 
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
Example 2:

Input: nums = [1,1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.*/

#include<stdio.h>
int main ()
{

int arr[6]={2,4,5,6,6,12};
int size=sizeof(arr)/sizeof(arr[0]);

int max=0;
int sec_max=0;

for(int i=0;i<size;i++){
if(arr[i]>max){
sec_max=max;
max=arr[i];
}
else if(arr[i]> sec_max && arr[i]!=max){
sec_max=arr[i];
}
}
printf("the second maxmimum element is : %d",sec_max);
return 0;
}