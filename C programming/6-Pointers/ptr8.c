#include <stdio.h>

int main()
{
int n,x , *ptr1,count=0;

printf("Enter the size of the array:");

scanf("%d",&n);

printf("Enter the element:");

scanf("%d",&x);


int arr [n];

ptr1 = arr ;

printf("Enter the array elements:");

for(int i =0 ; i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(int i =0;ptr1<=&arr[n-1];ptr1++,i++)
{
  if(*ptr1==x)
  {
	printf("%d is found at index %d\n",x,i);
	count++;
  }

}
if(count==0)
  {
	printf("%d is not found",x);

  }
    return 0;
}
