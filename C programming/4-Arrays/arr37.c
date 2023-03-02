#include <stdio.h>
#include <stdlib.h>
int main()
{
	
int n,x,y,det,a,b,c;


printf("Enter the num of rows & columns:");

scanf("%d",&x);

int mat[x][x];

printf("Enter the matrix:");

for(int i =0;i<x;i++)
{
	
for(int j=0;j<x;j++)
{
	
scanf("%d",&mat[i][j]);

}
printf("\n");

}

if (x==2)
{
	
det=mat[0][0] * mat[1][1]-mat[1][0]*mat[0][1] ;

printf("the determinant of the matrix = %d",det);
	
}
if (x==3)
{
a=mat[0][0] * (mat[1][1]*mat[2][2]-mat[2][1]*mat[1][2]);

b=mat[0][1] * (mat[1][0]*mat[2][2]-mat[2][0]*mat[1][2]);

c=mat[0][2] * (mat[1][0]*mat[2][1]-mat[2][0]*mat[1][1]);

det=a-b+c ;

printf("the determinant of the matrix = %d",det);
	
}


return 0 ;
}