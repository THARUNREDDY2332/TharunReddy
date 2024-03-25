#include<stdio.h>

int main(){
    int num,i;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&num);
    printf("Multiplication table of %d:\n",num);
    i=1;
loop:
     printf("%d X %d = %d\n",num,i,num*i);
     i++;
    if (i<=10)
         goto loop;
    return 0;  
}