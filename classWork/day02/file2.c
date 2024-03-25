#include<stdio.h>
int main()
        {
                char ch;
		/*
	        ch = getchar();
                // printf("\nread character from stdin is: %c",ch);
                putchar(ch);

	        */

		ch = getc(stdin);
		putc(ch,stdout);

               
                printf("\n\n");

                return 0;
        }
~                      
