#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,count=0,i=0,pos; 
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;


char str[n],word[n];


printf("Enter the string:") ;


fflush (stdout) ;

gets(str);


printf("Enter the word:") ;

gets(word);
int j =0 ;
while(str[i]!='\0')
{
if(str[i]==word[j]) 
{
if(j==0)
{
pos = i ;	
}	
count++;
j++;
i++;
continue ;

}	
i++;	
	
}
if(count==strlen(word))
{
printf("'%s' is found at index %d",word,pos);
}
else
{
printf("the word is not found");	
}	
	
return 0 ;	
}
