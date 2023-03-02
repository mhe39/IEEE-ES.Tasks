#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,count=0,i=0;
char car ; 
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;


char str[n];


printf("Enter the string:") ;


fflush (stdout) ;

gets(str);


printf("Enter the character:") ;

car = getchar() ; 

while(str[i]!='\0')
{
if(str[i]==car) 
{	

str[i] =' ' ;
}	
i++ ; 
	
}

puts(str);
return 0 ;	
}
