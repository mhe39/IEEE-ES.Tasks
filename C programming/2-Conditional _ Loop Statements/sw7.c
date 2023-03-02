#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a,b,c,dis,root1,root2,img,real ;
	
	// dis >>>>>discriminant

printf("enter the numbers:");

scanf("%f%f%f",&a,&b,&c);

dis = pow(b,2) - (4 * a * c) ;

switch(dis>0)
{
case 1 :

root1 = (-b + sqrt(dis)) / (2*a);

root2 = (-b - sqrt(dis)) / (2*a);

printf("root1=%.2f \n root2=%.2f",root1,root2); 

break;

case 0:

switch(dis<0)
{
case 1 :

//negative

real = -b / (2 * a);
img = sqrt( fabs(dis) ) / (2 * a);
 
printf("the two imaginary roots are: %.2f + %.2fi and %.2f - %.2fi ",real,img,real,img);	

break;
	
case 0 :

// equal to zero
root1 = root2 = -b/(2*a);
 
printf("Two equal and real roots: %.2f and %.2f", root1, root2);
 
break;


}
}
}