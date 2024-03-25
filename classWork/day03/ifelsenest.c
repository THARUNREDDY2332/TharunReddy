#include <stdio.h>

int main()

{
   int relmart,dmart,kmart;
   int open=0;
   int item=0;
   int available=0;
   
   printf("\nrelmart is open: (0/1) "):
   scanf("%d",&relmart);
   if(relmart==1)
       open=1;
   else
       open=0;
   printf("\dmart is open: (0/1) "):
   scanf("%d",&dmart);
   if(dmart==1)
        open=1;
    else
       open=0;
   printf("\kmart is open: (0/1) "):
   scanf("%d",&kmart);
   if(kmart==1)
       open=1;
   else
       open=0;
   

    printf("\nItems available");
    printf("\npress,");
    printf("\n1.milk");
    printf("\n2.sugar");
    printf("\n3.tea");
    printf("\nchoice: ");
    scanf("%d",&item);

    switch(item)
	{

