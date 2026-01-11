// 709. To Lower Case
// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

// Example 1:
// Input: s = "Hello"
// Output: "hello"

// Example 2:
// Input: s = "here"
// Output: "here"

// Example 3:
// Input: s = "LOVELY"
// Output:"lovely"

#include<stdio.h>
#include<string.h>
int main ()
{
char str[1000];
printf("Enter the String: ");
fgets(str,sizeof(str),stdin);

for(int i=0;str[i] != '\0';i++){
    if(str[i]>='A' && str[i] <='Z'){
        str[i]=str[i]+32;
    }
}
printf("%s",str);
return 0;
}