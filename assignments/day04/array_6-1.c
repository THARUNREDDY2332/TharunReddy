#include <stdio.h>

 void findleader(int arr[],int n){
  int  max_from_right=arr[n-1];
  printf("%d ", max_from_right);

 for(int i=n-2;i>0;i--){
    if(arr[i]>max_from_right){
       max_from_right=arr[i];
       printf("%d",max_from_right);
       }
    }
    printf("\n");
 }
 int main(){
 
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array: ");
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }

 printf("Output: ");
 findleader(arr, n);

 return 0;
 }
