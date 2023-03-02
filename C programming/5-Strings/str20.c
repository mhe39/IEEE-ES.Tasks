#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,count=0,i;
char car ; 
char freq[26];
printf("Enter the string size:") ;

fflush (stdout) ;

scanf("%d",&n);

fflush (stdin) ;


char str[n];


printf("Enter the string:") ;


fflush (stdout) ;

gets(str);

int len =strlen(str);


for (i=0;i<26;i++)
{
	freq[i] = 0;
}
for(i=0;i<len;i++)
{
if (str[i] >= 'a' && str[i]<='z')
	{
		freq[str[i]-97]++;
	}
else if (str[i] >= 'A' && str[i]<='Z')
	{
		freq[str[i]-65]++;
	}
}	


 printf("\nFrequency of all characters in the given string: \n");
 for(i=0;i<26;i++)
 {
 if (freq[i]!=0)
 {
	 printf("'%c' = %d\n",(i+97),freq[i]);
 }
 }
return 0 ;	
}
