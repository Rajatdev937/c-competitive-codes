/* 1941. Check if All Characters Have Equal Number of Occurrences
Given a string s, return true if s is a good string, or false otherwise.
A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).
Example 1:
Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.
Example 2:
Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times. */

#include<stdio.h>
int main ()
{
char str[100];
int freq[26]={0};

printf("enter a string: ");
fgets(str,sizeof(str),stdin);

for(int i=0;str[i]!='\0';i++){
    freq[str[i]-'a']++;
}
int first=0;
for(int i=0;i<26;i++){
    if(freq[i]){
      if(first==0)
      first=freq[i];
      else if(freq[i]!=first){
        printf("false");
        return 0;
      }
    }
}
printf("true");
}