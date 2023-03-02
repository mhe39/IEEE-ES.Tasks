#include <stdio.h>

int main()
{
int n, *ptr1,*ptr2,sum;

printf("Enter the size of the arrays:");

scanf("%d",&n);



int arr1 [n][n],arr2[n][n],arr3[n][n];

ptr1 = &arr1[0][0] ;

ptr2 = &arr2[0][0] ; 

printf("Enter the first array elements:");

for(int i =0 ; i<n;i++)
{


for(int j =0 ; j<n;j++)
{
    scanf("%d",&arr1[i][j]);
}
}
printf("Enter the second array elements:");

for(int i =0 ; i<n;i++)
{


for(int j =0 ; j<n;j++)
{
    scanf("%d",&arr2[i][j]);
}
} 

for(int i =0 ; i<n;i++)
{


for(int j =0 ; j<n;j++)
{
	sum =0 ;
	for(int x = 0 ;x<n ; x++)
	{
	sum +=  (*(*(arr1+i)+x)) * (*(*(arr2+x)+j)) ;
	}
	 *(*(arr3+i)+j) = sum ;
}
	

} 

for(int i =0 ; i<n;i++)
{


for(int j =0 ; j<n;j++)
{
    printf("%d ",*(*(arr3+i)+j));
}
printf("\n");
}



return 0;
}
