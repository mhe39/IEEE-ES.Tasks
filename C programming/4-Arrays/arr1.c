#include <stdio.h>
#include <stdlib.h>
# define max 100

int arr(int,int,int[]) ;

int main()
{
int n,i;

int a [max] ;

printf ("Enter the size of array:");

scanf("%d",&n);

printf("Enter the numbers:");


for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("the number are :");

arr(n,0,a);



return 0 ;	
}


int arr(int n , int start,int a[] )
{

int i , j ;


	
if (start>=n)
{
	
 return 0 ;
}

	
printf("%d,",a[start]);


arr (n,start+1,a) ;
	
	
}