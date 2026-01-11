#include <stdio.h>
#include <string.h>

int main() {
char str[] = "abcdefg";
int size = strlen(str);
int i, k = 2;

for(i=0;i<size;i+=2*k) {
int left=i;
int right=i+k-1;

if(right>= size)
right=size - 1;

while (left < right) {
char temp = str[left];
str[left] = str[right];
str[right] = temp;
left++;
right--;

}
}

printf("%s", str);
return 0;
}
