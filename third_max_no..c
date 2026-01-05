#include<stdio.h>
#include<limits.h>
int main ()
{
int arr[6]={13,4,1,6,7,0};
int size=sizeof(arr)/sizeof(arr[0]);

int first_max=INT_MIN;//-∞
int sec_max=INT_MIN;//-∞
int third_max=INT_MIN;//-∞

for(int i=0;i<size;i++){
if(arr[i]>first_max){
third_max=sec_max;
sec_max=first_max;
first_max=arr[i];
}
else if(arr[i]>sec_max && arr[i] != first_max){
third_max=sec_max;
sec_max=arr[i];
}
else if(arr[i]>third_max && arr[i] != first_max && arr[i] != sec_max){
third_max=arr[i];
}
}
printf("third maximum element %d ",third_max);
return 0;
}