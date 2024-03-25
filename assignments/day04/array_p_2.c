#include<stdio.h>

int findleast(int arr[],int n){
  int least=arr[0];
   for(int i=1;i<n;i++){
      if(arr[i]<least){
         least=arr[i];
      }
    }
    return least;
}
int main(){
   int arr[]={11,5,9,3,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   int least=findleast(arr,n);

   printf("the least number in the list is: %d\n",least);
  
   return 0;
}
