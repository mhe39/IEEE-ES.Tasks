#include <stdio.h>
#include <stdlib.h>
# define max_size 100
int main()
{
	
int n,arr[max_size],add,pos,x;

printf("Enter the size of array:");

scanf("%d",&n);

printf("Enter the additional number:");

scanf("%d",&add);

printf("Enter the position:");

scanf("%d",&pos);

for(int i =0;i<n;i++)
{

	scanf("%d",&arr[i]);
	
}



for(int j=n;j>=(pos+1);j--)
{



arr[j]=arr[j-1];

	
	
}

arr[pos]=add ;

	
printf("{");

for(int i=0;i<=n;i++)
{
	printf("%d,",arr[i]);
}
printf("}");
return 0 ;
}	