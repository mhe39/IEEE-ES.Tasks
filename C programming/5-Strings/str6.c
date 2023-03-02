#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,c ;
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
if ( ('A'<=str[i]) &&   (str[i]<='Z'))
{
 str[i]+=32 ;
 
}

}
printf("lower case string :");
puts(str);	
	
fflush(stdout);	
	
return 0 ;	
}
