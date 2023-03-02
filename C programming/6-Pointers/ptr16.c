#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
int main()
{
    
	int len =0 ;
	char str [max],rev[max] ; 
	
	char *ptr1 = str ;
	char *ptr2 = rev ;

    printf("Enter any string: ");
    gets(str);

   
    while(*(ptr1) != '\0')
	{
		ptr1++ ;
		len ++ ;
	}
	printf("%c",*ptr1);

    while(*(ptr2++)=*(--ptr1));
	*(rev+len) = '\0';
	
printf("The original string :");
   puts(str);
   printf("\n");
printf("The reversed string :");

   puts(rev) ;

   return 0;
}