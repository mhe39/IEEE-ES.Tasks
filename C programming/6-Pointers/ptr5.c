#include <stdio.h>

int main()
{
int n , *ptr1,*ptr2;

printf("Enter the size of the array:");

scanf("%d",&n);
int arr1 [n],arr2[n] ;
ptr1 = arr1 ;
ptr2 = arr2 ;

printf("Enter the array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr1[i]);
}

for(;ptr1<=&arr1[n-1];ptr1++,ptr2++)
{
 *ptr2 = *ptr1 ;
}
  printf("the original array :") ;
for(int j=0;j<n;j++)
{
    printf("%d ",*(arr1+j)) ;
}

printf("\n");
printf("the copied array :") ;

for(int j=0;j<n;j++)
{
    printf("%d ",*(arr2+j)) ;
}
    return 0;
}