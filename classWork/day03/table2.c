#include<stdio.h>

int main(){
    int i=1;

loop:
     printf("2 X %d = %d\n",i,2*1);
     i++;
    if (i<=10)
         goto loop;
    return 0;  
}