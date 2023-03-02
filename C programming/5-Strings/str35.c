#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,count=0,i=0,j=0;
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;


char str[n];


printf("Enter the string:") ;


fflush (stdout) ;

gets(str);

int len = strlen(str);

while(str[i]==' ' || str[i]=='\t' || str[i]=='\n' ) 
{
i++;
}
 if(i != 0)
   {
      
        j = 0;
        while(str[j + i] != '\0')
       {
            str[j] = str[j + i];
            j++;
       }
    str[j] = '\0';
   }


printf("the trimmed string :");

puts(str);	
	
return 0 ;	
}
