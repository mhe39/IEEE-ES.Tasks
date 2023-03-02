#include <stdio.h>
#include <stdlib.h>
# define max_size 100
int main()
{
	
int n,x,y,arr[max_size];

printf("Enter the size of array:");

scanf("%d",&n);
	

	
for (int i =0 ; i<n ;i++)
{
	
scanf("%d",&arr[i]);	
	
}	
int max1 = 0;
int max2 = 0;
for(int j=0;j<n;j++)
{
	
if (max1<arr[j])
{
	max1 = arr[j] ;
}	
else
{
	
}
	
	
	
}

for (int j=0;j<n;j++)
{
if ((arr[j]<max1 ) && (arr[j]>max2))
{
	max2 = arr[j] ; 
}	
else 
{
	
}	
	
}	

	
	
printf("The sec max num is : %d",max2);	
	
	return 0; 
}