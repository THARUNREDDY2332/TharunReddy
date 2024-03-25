#include<stdio.h>

int main(){
  int N,num=1;
  printf("enter the value of N(2<=N<=10):");
  scanf("%d",&N);
  for(int i=0;i<N;i++){
   for(int j=0;j<N;j++){
    printf("%d",num++);
     if(j!=N-1){
        printf("*");
        }
       }
     printf("\n");
    }
  return 0;
}
