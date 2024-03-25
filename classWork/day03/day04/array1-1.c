/* 
demo on array
*/

#include<stdio.h>
#define CAP 5
int main()
{
     int arr[CAP];
    printf("\nBase address of the array: %u",&arr[0]);
    printf("\naddress of arr[0] = %u", &arr[0]);
    printf("\naddress of arr[1] = %u", &arr[1]);
    printf("\naddress of arr[2] = %u", &arr[2]);
    printf("\naddress of arr[3] = %u", &arr[3]);
    printf("\naddress of arr[4] = %u", &arr[4]);

 printf("\n\n");
return 0;

}




/*
Base address of the array: 2811812272
address of arr[0] = 2811812272
address of arr[1] = 2811812276
address of arr[2] = 2811812280
address of arr[3] = 2811812284
address of arr[4] = 2811812288



*/