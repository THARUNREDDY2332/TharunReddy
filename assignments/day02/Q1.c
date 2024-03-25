#include <stdio.h>
void squared_number_star_pattern(int n){
     int start=1;
     for (int i=0;i<n;i++){
        for(int j=0;j<n,j++);
	{
          printf("%d",start++);
          if (j!=n-1)
	  {
          printf("*");
        }
      }
     printf("\n");
   }
 }

 int main(){
      int n:
      printf("Enter the value of n: ");
      scanf("%d,&n);
      squared_number_star_pattern(n);
      return 0;
}
