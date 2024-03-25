#include<stdio.h>
int main (){
    int n;
    printf("Input: \n");
    scanf("%d", &n);
 
    printf("output: \n");

    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if (j<=n-i){
              printf("%d+",i);
             }else{
                if(j==n){
                   printf("%d\n",n);
                   }else{
                      printf("%d",n-i+1);
                }
              }
        }
     }
     return 0;
}
