#include <stdio.h>
#include <stdlib.h>
int main()
{
	
int n,x,y,temp;


printf("Enter the size of array:");

scanf("%d",&n);

int arr[n];

printf("Enter the array:");

for(int i =0;i<n;i++)
{
	
scanf("%d",&arr[i]);

}

for( int i=0; i<n; i++)
    {
           for( int j=i+1; j<n; j++)
        {
            
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        
            }
        }
    }



printf("ascending:");
for(int i=0;i<n;i++)
{
	

printf("%d \t",arr[i]);

}

printf("\n");

for( int i=0; i<n; i++)
    {
           for( int j=i+1; j<n; j++)
        {
            
            if(arr[i] < arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        
            }
        }
    }

printf("descending:");

for(int i=0;i<n;i++)
{
	

printf("%d \t",arr[i]);

}




return 0 ;
}