#include<studio.h>

int displist(int [], int);
int sortDesc(int [],int);
 
{
   int arr[]={66,77,22,33,99,11};
   int Size = sizeof(arr)/sizeof(arr[0]);
   printf("\nBefore Sort\n");
   displist(arr,size);
   sortDesc(arr,size);
   printf("\nAfter sort");
   displist(arr,size);
   printf("\n\n");
   return 0;
}
