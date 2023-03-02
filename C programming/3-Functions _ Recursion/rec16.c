#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int reverse(int num);
int isPal(int num);



int main()
{
    int x;
    
    
    printf("Enter any number: ");
    scanf("%d", &x);
    
    if(isPal(x) == 1)
    {
        printf("%d is palindrome number.\n", x);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", x);
    }
    
    return 0;
}



int isPal(int num)
{
   
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}



int reverse(int num)
{
   
    int digit = (int)log10(num);
    
    
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}