#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
# define max 20
void fun(float arr1[],char arr2[][50],int n,float avr ) ;

// the protocol of the used function in this program and it has 4 parameters including two arrays 
int main()
{
	
int  n;

float sum = 0.0 ;

// we enter the number of students before declaring the arrays
printf("Enter the number of students:");

scanf("%d",&n);

char x[50];

char stu[max][50]; 

float sco[max]; 

//all variables are declared and we are ready to begin 

/* first, we need to get the inputs from user that will be put into the two arrays
sco : for the scores of every student
stu : for the name of everyone
*/ 
printf("Enter the names and scores:");

	
for(int i =0 ; i<n ; i++)
{
 scanf("%s",&x) ;
	
 scanf("%f",&sco[i]) ;

 sum+=sco[i];
	
 strcpy(stu[i],x);	
}
// we calculate the average after we get the sum of all scores 

float avr = sum /n ; 

// then we call the function to do the rest of work 

fun (sco, stu,n,avr) ;

printf("\nthe average score =%.2f",avr);	

}

void fun (float arr1[],char arr2[][50],int n,float avr)
{
float temp1 ;

char temp2[50] ;	

for(int i =0;i<n;i++)
{
	
for (int j =i+1;j<n;j++)
{
	
if (arr1[i]>arr1[j])
{
temp1 = arr1[i];

arr1[i] = arr1[j];
 	
arr1[j] = temp1 ;

strcpy(temp2 ,arr2[i]);

strcpy(arr2[i] ,arr2[j]);
 
strcpy(arr2[j] , temp2) ;


}
}
	
}
for (int j=0;j<n;j++)
{
	if (arr1[j]==arr1[n-1])
	{
	printf("%.2f >>> %s\t(congratulations and keep the great work going on )\n",arr1[j],arr2[j]);	
	}
	else if(arr1[j]<avr)
	{
	printf("%.2f >>> %s\t(warning:your grades are below the average.you should work harder next time ..good luck)\n",arr1[j],arr2[j]);	
	}
	else
	{
	printf("%.2f >>> %s\n",arr1[j],arr2[j]);
	}
}

printf("Highest test score = %.2f\n",arr1[n-1]); 
	
	
}
