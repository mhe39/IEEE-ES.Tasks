#include <stdio.h>
#include <stdlib.h>
int main()
{
	
int n,x,y,sum=0;


printf("Enter the num of rows:");

scanf("%d",&x);

printf("Enter the num of columns:");

scanf("%d",&y);

int mat[x][y];

printf("Enter the first matrix:");

for(int i =0;i<x;i++)
{
	
for(int j=0;j<y;j++)
{
	
scanf("%d",&mat[i][j]);

}
printf("\n");

}

for(int i =0;i<x;i++)
{
	
for(int j=0;j<y;j++)
{
sum+=mat[i][j] ;
	


}
printf("sum of row %d =%d \n",i,sum);

sum=0;
}

for(int j =0;j<y;j++)
{
	
for(int i=0;i<x;i++)
{
sum+=mat[i][j] ;
	


}
printf("sum of column %d =%d \n",j,sum);

sum=0;
}




return 0 ;
}