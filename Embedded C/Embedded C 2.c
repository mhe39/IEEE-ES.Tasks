#include <stdio.h>
#include "STDTYPE.h"
int count_bits (u32*) ; 

int main()
{
u32 reg,bits_num ; 

scanf("%d",&reg) ; 
fflush(stdin);

bits_num = count_bits(&reg) ;


printf("Total number of bits set to 1 = %d",bits_num) ; 

return 0 ; 
}


int count_bits (u32*ptr1)
{

u32 count= 0 , bit = 0 ; 

while (bit<(sizeof(int)*8))
{
if( (1 & (*(ptr1)>> bit) ) == 1)
{
    count ++ ; 
}
bit ++ ;
}

return count ;

}