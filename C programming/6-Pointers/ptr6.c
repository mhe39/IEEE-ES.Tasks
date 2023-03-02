#include <stdio.h>

int main()
{
int n , *ptr1,*ptr2;

printf("Enter the size of the array:");

scanf("%d",&n);
int arr [n],rev[n] ;
ptr1 = arr ;
ptr2 = &rev [n-1] ;

printf("Enter the array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(;ptr1<=&arr[n-1];ptr1++,ptr2--)
{
 *ptr2 = *ptr1 ;
}
  printf("the original array :") ;
for(int j=0;j<n;j++)
{
    printf("%d ",*(arr+j)) ;
}

printf("\n");
printf("the reversed array :") ;

for(int j=0;j<n;j++)
{
    printf("%d ",*(rev+j)) ;
}
    return 0;
}