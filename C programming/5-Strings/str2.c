#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i=0 ;

printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;

char str1[n],str2[n] ;
 
printf("Enter the string:") ;

fflush (stdout) ;

fgets(str1,sizeof(str1),stdin);

fflush (stdin) ; 

while (str1[i]!='\0')
{
  str2[i] = str1[i] ;
 i++  ;
}

str2[i] = '\0' ;

printf("\n");
printf("original:");
puts(str1);
printf("copy:");
puts(str2);	
	
fflush(stdout);	
	
	
	
return 0 ;	
}
