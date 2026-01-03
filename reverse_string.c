/*Write a function that reverses a string. The input string is given as an array of characters .
You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]*/
#include<stdio.h>
#include<string.h>
int main ()
{
char str[100];
printf("Enter the string: ");
scanf("%s",str);

int size=strlen(str);

int left=0;
int right=size-1;
char temp;
while(left<right){
temp=str[left];
str[left]=str[right];
str[right]=temp;

left++;
right--;
}
printf("Reversed string: %s",str);
return 0;
}