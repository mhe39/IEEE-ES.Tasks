#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	
/*online market>>>>>>>>*/	
	
// x >>>> minimum number of items ,,,  p >>>> price 


printf("\t tea>>1 juice>>2 chips>>3 milk>>4 jam>>5 soda>>6....etc\n");

	
int  i,j,x,sum;
	
char items[20],cont[20];
	
float prices[20],tot,p,s ;

char y[20],sh[20] ;

sum=0;

tot=0.0; 

do{
	

printf("Enter the number of items:");

fflush ;

scanf("%d",&x);

sum+=x;


while(x>=2)
{
	
for(i=0;i<x;i++)
{
	
printf("Enter the item name:");

fflush ;

scanf("%s",&y);

fflush ;


printf("Enter the item price:");

fflush ;

scanf("%f",&p);

prices[i]=p ;

tot= tot +p;

	
}	
break ;
}

printf("continue shopping?");

fflush;

scanf("%s",&cont);	

}while(strcmp(cont,"yes") ==0);	


printf("over night shipment?");

fflush ;

scanf("%s",&sh);

if ((strcmp (sh ,"yes")== 0) && (tot<=10))	
{
	s=7 ;	
}	

else if((strcmp(sh ,"yes")== 0) && (tot>10))
{
	s=8;
}	

else if (tot<10)  
{
	s=2 ;
}	
	
else if (tot>=10) 
{
	s=3;
	
}	
	
if(sum>5)
{
	tot = tot - (tot*.2);	
}

tot = tot + s ;

printf("tot price = %.4f $\n",tot);


for(j=0;j<x;j++)
{
printf("item %d >>>> %.4f $\n",j,prices[j]);	
}	
	
return 0 ;
	
}