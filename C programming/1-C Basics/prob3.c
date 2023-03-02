#include <stdio.h>
int main()
{
int x,y,sum,diff,prod,mod;
float quot;

printf("Enter the numbers:");

scanf("%d%d",&x,&y);

sum=x+y;
diff=x-y;
prod=x*y;
quot=float(x/y);
mod=x%y;

printf("Sum=%d\n",sum);
printf("Differnce=%d\n",diff);
printf("Product=%d\n",prod);
printf("Quotient=%f\n",quot);
printf("Modulus=%d",mod);
return 0 ;

}