
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,x=0,y=0,z=0 ;
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;

char str[n];

printf("Enter the string:") ;

fflush (stdout) ;

gets(str);

for(int i=0;str[i]!='\0';i++)
{
if ( ('A'<=str[i]) &&   (str[i]<='z'))
{
 
 x++;
}

else if ( ('0'<=str[i]) &&   (str[i]<='9'))
{
 y++;
 
}
	
else
{
	z++;
}
}

printf("Alphabets = %d \n Digits = %d \n Special characters = %d ",x,y,z);

	
fflush(stdout);	
	
return 0 ;	
}
