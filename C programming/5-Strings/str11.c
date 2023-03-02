#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,len=0,i=0;
char temp ; 
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;

char str[n];

printf("Enter the string:") ;

fflush (stdout) ;

gets(str);
while (str[i]!='\0')
{	
len ++;
i++ ;
}
for( i=0;i<(len+1)/2;i++)
{
temp = 	str[i] ;
 
str[i] = str[len-i-1] ;

str[len-i-1] = temp ;
	
}

printf("reversed string:");

puts(str);	
	
fflush(stdout);	
	
return 0 ;	
}
