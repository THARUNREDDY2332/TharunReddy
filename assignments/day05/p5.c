#include<stdio.h>
int x(int A);
int main()
{
   int A;
   printf("enter the number: ");
   scanf("%d",&A);
   printf("factorial of given number %d=%d",A,x(A));
   return 0;
}
int x(int A)
{
  if(A>=1)
   return A*x(A-1);
    else
     return 1;
}
