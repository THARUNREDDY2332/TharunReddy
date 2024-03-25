#include<stdio.h>
 void findsubarray(int arr[],int n,int sum){
  int curr_sum=arr[0];
  int start=0;
  int i;
  
   for (i=1;i<=n;i++){
     while(curr_sum > sum && start < i-1){
       curr_sum-=arr[start];
       start++;
     }
     if (curr_sum ==sum){
        printf("Sum found between indexes %d and %d\n",start,i-1);
        return;
      }
      if(i<n)
       curr_sum += arr[i];
    }
   printf("No subarray found\n");
}
int main(){
    int n,sum;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
  }
  scanf("%d", &sum);
  findsubarray(arr, n, sum);
  return 0;
}
