#include <stdio.h>

int main()
{
int n ,*ptr,temp;

printf("Enter the size of the arrays:");

scanf("%d",&n);

int arr [n];

printf("Enter the array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(int i =0 ; i<n ; i++)
{
for(int j =i+1 ; j<n ; j++)
{
if(*(arr+i) > *(arr+j))
{
	temp = *(arr+i);
	*(arr+i) = *(arr+j);
	*(arr+j) = temp;
}	
}
}
 printf("Array in ascending order:");
 
for(int i =0 ; i<n;i++)
{
    printf("%d, ",*(arr+i));
}

printf("\n");

for(int i =0 ; i<n ; i++)
{
for(int j =i+1 ; j<n ; j++)
{
if(*(arr+i) < *(arr+j))
{
	temp = *(arr+i);
	*(arr+i) = *(arr+j);
	*(arr+j) = temp;
}	
}
}
 printf("Array in descending order:");
 
for(int i =0 ; i<n;i++)
{
    printf("%d, ",*(arr+i));
}

    return 0;
}