#include <stdio.h>

int main()
{
  int plan;

  printf("Enter the subscription plan(1):");
  scanf("%d",&plan);
 

  if (plan==1)
  {

   printf("access.\n");
  }
  else
  {
   printf("invalid plan selected.\n");
  }

 return 0;
}




