#include<stdio.h>

int main()
{
    int qty=179;
    int *ptr;
    char *ptr1;
    float *ptr2;

    printf("\nSize of qty=%d",sizeof(qty));
    printf("\nSize of ptr=%d",sizeof(ptr));
    printf("\nSize of ptr1=%d",sizeof(ptr1));
    printf("\nSize of ptr2=%d",sizeof(ptr2));

    printf("\nAddress of qty=%u",&qty);
    printf("\nAddress of ptr->int=%u",&ptr);
    printf("\nAddress of ptr->char=%u",&ptr1);
    printf("\nAddress of ptr->float=%u",&ptr2);
    
    ptr = &qty;

    printf("\nContents of qty =%u",qty);
    printf("\nContents of ptr(address) %u is storing %u",&ptr,ptr);

    printf("\n\n");
    return 0;
}