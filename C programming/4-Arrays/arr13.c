#include <stdio.h>
#include <stdlib.h>
# define max_size 100
int main()
{
	
int n,dup=0,arr[max_size];

printf("Enter the size of array:");

scanf("%d",&n);
	

	
for (int i =0 ; i<n ;i++)
{
	
scanf("%d",&arr[i]);	
	
}

for(int i=0;i<n;i++)
{
int x = arr[i];	
	
for(int j=i+1;j<n;j++)
{

if(arr[j]==x)
{
dup+=1;	
}	
	
	
}

}


printf("num of duplicates=%d",dup);
return 0;
}	