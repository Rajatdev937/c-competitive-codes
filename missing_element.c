/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
*/
#include<stdio.h>
int main ()
{
int arr[6]={2,0,1,6,4,3};
int xor=0;
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<=n;i++){
    xor^=i;
}
for(int i=0;i<n;i++){
    xor^=arr[i];
}
printf("the missing number is %d",xor);
return 0;
}