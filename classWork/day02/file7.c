#include <stdio.h>

int main() { 
   int temperature;
    
   printf("enter the room temprature:");
   scanf("%d",&temperature);
   
   if (temperature>32) {
       printf("it is hot! turning on the fan.\n");
   }else {
     printf("it is cool,Turning off the fan.\n");
   }

   return 0;

}         
