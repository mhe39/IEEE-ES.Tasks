#include <stdio.h>
#include <stdlib.h>
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
    while(str1[i] != '\0')
{
    i++;
}

for (j=0;str2[j]!='\0';j++)
{

str1[i] = str2[j];

i++;
}

str1[i] = '\0' ;

puts(str1);

return 0 ; 
}