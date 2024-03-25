#include<stdio.h>

int findGreatest(int arr[],int n){
    int greatest=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>greatest){
          greatest = arr[i];
    }
  }
  return greatest;
} 
int main(){
    int arr[]={10,5,8,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);

    int greatest=findGreatest(arr,n);
    printf("The greatest number in the list is: %d\n",greatest);

   return 0;
}
