#include <stdio.h>
int main()
{
int i;
int n;
printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("enter the elements of array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int sum=0;

printf("running sum array:");
for( i =0 ; i<n ; i++){ 
sum+=arr[i];
printf("%d",sum );
if(i<n-1)
printf(",");}
return 0;
}
