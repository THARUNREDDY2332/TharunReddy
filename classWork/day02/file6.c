#include <stdio.h>
int main()
{
  int number;
  

   printf("enter an integer: ");
   scanf("%d",&number);
   
   if(number%2==0){
     printf("%d is an even.",number);
   }
   else{
       printf("%d is an odd.",number);
    }
  return 0;
}
   
