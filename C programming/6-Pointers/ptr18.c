#include <stdio.h>
int fun (int*,int*,int*,int);
int main()
{
int n,min,max ;

printf("Enter the size of the array:");

scanf("%d",&n);
int arr [n];

printf("Enter the array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr[i]);
}

fun(arr,&min,&max,n);

printf("Minimum number is %d \n",min);

printf("Maximum number is %d",max);

    return 0;
}

int fun(int*arr,int*min,int*max,int n)
{
*min = *arr ;
*max = *arr ;	
for(int i =0 ; i<n;i++)
{
	if(*min>*(arr+i))
	{
		*min = *(arr+i);
	}
	if(*max<*(arr+i))
	{
		*max = *(arr+i);
	}
	
}	
	
	
	
}