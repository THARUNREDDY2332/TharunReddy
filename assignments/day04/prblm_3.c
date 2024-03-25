#include<stdio.h>

void bubblesort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
           if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
       }
     } 
    }
}
int main(){
  int arr[]={5,9,13,99,45,54};
  int n=sizeof(arr)/sizeof(arr[0]);

  bubblesort(arr,n);
  printf("Sorted list in decending order: ");
  for (int i=0;i<n;i++){
  printf("%d",arr[i]);
 }
printf("\n");

return 0;
}

