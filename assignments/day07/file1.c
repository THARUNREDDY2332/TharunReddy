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

    printf("\n\n");
    return 0;
}


/*
Size of qty=4
Size of ptr=8
Size of ptr1=8
Size of ptr2=8
Address of qty=4294958284
Address of ptr->int=4294958288
Address of ptr->char=4294958296
Address of ptr->float=4294958304


*/