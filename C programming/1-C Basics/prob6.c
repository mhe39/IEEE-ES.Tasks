#include <stdio.h>
int main()
{
	float d,r,circ,area;
	float pi = 3.14;
	printf("Enter the radius:");
	scanf("%f",&r);
	d=2*r;
	circ=2*pi*r;
	area=pi*r*r;
	printf("Diameter=%f units\n",d);
	printf("Circumference=%f units\n",circ);
	printf("Area=%f sq.units",area);
	
	return 0;
}