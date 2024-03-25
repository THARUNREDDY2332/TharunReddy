#include<stdio.h>

void alphabet_triangle(int n){
   int i,j,k;
   char ch;

   for (i=0;i<n;i++){
      ch='A';
      for(j=0;j<n-i-1;j++){
         printf(" ");
       }
      for (k=0;k<=i;k++){
          printf("%c",ch++);
           }
       ch-=2;
       for (k=0;k<i;k++){
           printf("%c",ch--);
         }
         printf("\n");
        }
     }
int main (){
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    alphabet_triangle(n);
    return 0;
}
