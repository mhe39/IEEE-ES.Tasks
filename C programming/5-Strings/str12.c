#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,len=0,i=0,count=0 ;
char temp ; 
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;

char str[n],rev[n];


printf("Enter the string:") ;

fflush (stdout) ;

gets(str);
while (str[i]!='\0')
{	
len ++;
i++ ;
}
for( i=0;i<len;i++)
{
 rev[i]=str[len-i-1] ;
 
}
rev[len] = '\0';
i=0 ;
while(str[i]!='\0')
{
	if(str[i] ==rev[i] )
    {
		count++ ; 
	}
i++;	
}
		

puts(rev);


if (count == len )
{
	printf("Palindrome String");
}
	
else 
{
   printf("Not A Palindrome String");
	
}	
return 0 ;	
}
