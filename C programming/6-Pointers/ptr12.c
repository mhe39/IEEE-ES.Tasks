#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
int main()
{
    int n,len=0 ;

    
	
	char str [max] ; 
	
	char *ptr = str ;

    printf("Enter any string: ");
    gets(str);

   
    while(*(ptr++) != '\0')
	{
		len++;
	}

    printf("The length is %d",len);

    return 0;
}