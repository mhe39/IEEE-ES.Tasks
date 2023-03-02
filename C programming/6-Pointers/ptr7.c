#include <stdio.h>

int main()
{
int n , *ptr1,*ptr2;

printf("Enter the size of the arrays:");

scanf("%d",&n);

int arr1 [n],arr2[n] ;
ptr1 = arr1 ;
ptr2 = arr2 ;

printf("Enter the first array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr1[i]);
}
printf("Enter the second array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr2[i]);
}


  printf("the first array after swapping:") ;
for(int j=0;j<n;j++)
{
    printf("%d ",*(arr2+j)) ;
}

printf("\n");
printf("the second array after swapping:") ;

for(int j=0;j<n;j++)
{
    printf("%d ",*(arr1+j)) ;
}
    return 0;
}