#include <stdio.h>
#include <stdlib.h>
int main()
{
char *str ;
 
int sum =0 ;

int c ;

printf("Enter the string:") ;

fflush (stdout) ;



fflush (stdin);

int i=0 ; 	
while ( (c=getchar())!='\n')
{
	sum+=1;
	
    i++ ;
}

printf("the length of the string is : %d",sum);	
	
fflush(stdout);	
	
	
	
return 0 ;	
}
