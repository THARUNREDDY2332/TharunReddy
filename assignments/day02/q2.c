#include<stdio.h>

void number_star_right_triangle(int N){
     int start=1;
     for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            if(j=i){
               printf("%d",start++);
             }else{
                 printf("%d*",start++);
               }
            }
            printf("\n");
          }
     }
int main (){
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    number_star_right_triangle(N);
    return 0;
}
 
