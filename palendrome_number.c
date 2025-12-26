#include<stdio.h>
int main ()
{
int n;
printf("enter the number:");
scanf("%d",&n);
int original=n;
int reverse=0;
int remainder;

while(n!=0){
remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
if(original==reverse)
printf("its a palindrome number\n");
else
printf("its not a palindrome\n");
return 0;
}