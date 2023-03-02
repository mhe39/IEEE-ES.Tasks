#include <stdio.h>
#include <stdlib.h>
# define max_size 100
int main()
{
	
int n,rev,arr[max_size];

printf("Enter the size of array:");

scanf("%d",&n);
	

	
for (int i =0 ; i<n ;i++)
{
	
scanf("%d",&arr[i]);	
	
}

for(int i= 0;i<(n/2);i++)
{

	rev = arr[n-i-1] ;
	
	arr[n-i-1] = arr[i];
	
	arr[i] =rev;
}	


for(int j =0 ; j<n;j++)
{	
printf("%d",arr[j]);
}
return 0 ;	
}