#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n1,n2,n3,i,j;

printf("Enter the sizes of the two strings:") ;

fflush (stdout) ;

scanf("%d%d",&n1,&n2);

fflush (stdin) ;

char str1[n1],str2[n2] ;

 
printf("Enter the first string:") ;

fflush (stdout) ;

gets(str1);

printf("Enter the second string:") ;

fflush (stdout) ;

gets(str2);

fflush (stdin) ;

i=0;
while(str1[i] == str2[i])
{
   if(str1[i] == '\0' && str2[i] == '\0')
   { 
    break;
   }
   i++ ;
}

if (i==strlen(str2) && i==strlen(str1))
{
	printf("Both strings are lexographically equal.");
}
else
{
	if (strlen(str1)>strlen(str2))
	{
     printf("first string is longer than the second one");

	}
	else
	{	
        printf("first string is smaller than the second one");

	}
}
return 0 ; 
}