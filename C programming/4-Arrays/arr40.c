#include <stdio.h>
#include <stdlib.h>
int main()
{
	
int n,x,y,max,count=0;


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

for(int i =0;i<x;i++)
{
	
for(int j=0;j<x;j++)
{	
if(i==j)
{
	continue;
}
if(mat[i][j]==mat[j][i])
{
count++;	
}	
else
{
	
}
}

}
max =(x*x - x)/2;

printf("%d>>>%d\n",(count/2),max);

if((count/2)==max)
{
	printf("symmetric");
}

else
{
	printf("not symmetric");
}	

return 0;
}