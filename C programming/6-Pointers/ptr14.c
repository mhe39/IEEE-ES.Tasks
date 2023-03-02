#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100 
int main()
{


char str1[max],str2[max] ;

 char *ptr1 = str1;
 
 char *ptr2 = str2;
 
printf("Enter the first string:") ;

gets(str1);

printf("Enter the second string:") ;

gets(str2);

while (*ptr1 != '\0')
{
	ptr1++ ;
}	
	
while(*(ptr1++)=*(ptr2++));

puts(str1);
return 0;
}