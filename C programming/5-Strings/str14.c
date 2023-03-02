#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,count=0,i;
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

scanf("%c",&car);

for(int i=0;str[i]!='0';i++)
{
if(str[i]==car) 
{	
break;	
}	

count ++;
	
	
}

if(count<strlen(str))
{
printf("%c is found at index %d",car,count);
}
else
{
printf("the character is not found");	
}	
	
return 0 ;	
}
