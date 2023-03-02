#include <stdio.h>
#include <stdlib.h>
# define max_size 100
int main()
{
	
int n1,n2,n,arr1[max_size],arr2[max_size],arr[max_size];

printf("Enter the size of array1:");

scanf("%d",&n1);

for(int i =0;i<n1;i++)
{
	
scanf("%d",&arr1[i]);

arr[i] = arr1[i];	
}

printf("Enter the size of array2:");

scanf("%d",&n2);

for(int i =0;i<n2;i++)
{
	
scanf("%d",&arr2[i]);

arr[n1+i] = arr2[i];	
}

n=n1+n2;

printf("{");

for(int i =0;i<n;i++)
{
	
printf("%d,",arr[i]);	
}

printf("}");

return 0;
}