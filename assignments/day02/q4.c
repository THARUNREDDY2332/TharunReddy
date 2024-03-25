#include<stdio.h>

int main(){
    int n,digit,sum=0,product=1;
   
    printf("Enter a positive integer: ");
    scanf("%d", &n);
   

     while(n>0){
        digit =n%10;
        sum +=digit;
        product *= digit;
        n/=10;
      }
  
  printf("sum = %d\n",sum);
  printf("product =%d\n",product);
  return 0;
}
