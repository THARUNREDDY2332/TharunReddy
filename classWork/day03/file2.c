#include <stdio.h>

int main(){
    int i;

printf("multiplication table of 2:\n");
for (i=1;i<=10;i++){
    if (i%2==0){
        printf("2 X %d\n",i,2*i);
    }
}
 return 0;
}