#include<stdio.h>
int main(){
    int n,arr[100],sum,i,current_sum=0,start=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("Enter the target sum: ");
   scanf("%d",&sum);
   

   for(i=0;i<n;i++){
    current_sum += arr[i];

   while(current_sum > sum&& start<i){
      current_sum=arr[start];
      start++;
  }
  if(current_sum==sum){
    printf("Sum found between indexes %d and %d\n",start,i-1);
    break;
   }
 } 
if (current_sum != sum){
    printf("No subarray found\n");
}
return 0;
}
