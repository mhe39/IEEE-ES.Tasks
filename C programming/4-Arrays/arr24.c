#include <stdio.h>
#include <stdlib.h>
int main()
{
	
int n,x,y;


printf("Enter the num of rows:");

scanf("%d",&x);

printf("Enter the num of columns:");

scanf("%d",&y);

int mat1[x][y],mat2[x][y] ;

printf("Enter the first matrix:");

for(int i =0;i<x;i++)
{
	
for(int j=0;j<y;j++)
{	
scanf("%d",&mat1[i][j]);
}
printf("\n");

	
}
printf("Enter the second matrix:");

for(int i =0;i<x;i++)
{
	
for(int j=0;j<y;j++)
{	
scanf("%d",&mat2[i][j]);


}
printf("\n");


	
}
for(int i =0;i<x;i++)
{
	
for(int j=0;j<y;j++)
{	

printf("%d",mat1[i][j]-mat2[i][j]);

}
printf("\n");

	
}







return 0 ;
}