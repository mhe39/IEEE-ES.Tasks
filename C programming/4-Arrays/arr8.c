#include <stdio.h>
#include <stdlib.h>
# define max_size 100
int main()
{
	
int n,arr1[max_size],arr2[max_size];

printf("Enter the size of array:");

scanf("%d",&n);

for(int i =0;i<n;i++)
{
	
scanf("%d",&arr1[i]);

arr2[i]=arr1[i];	
	
}
printf("arr1:{");
for(int i=0 ;i<n;i++)
{
printf("%d,",arr1[i]);
}
printf("}");
printf("\n");
printf("arr2:{");

for(int i=0 ;i<n;i++)
{
printf("%d,",arr2[i]);
}
printf("}");

return 0;
}