//Program to compute electricity bill
#include <stdio.h>
#define METER_CHARGE 100
int main()
{
// Variable declaration
	char name[ 20];
	int units;
	float charge, total;
	
//Accept operator
	printf(" Enter customer name: ");
	scanf( "%s", name);
	printf("Enter units consumed :");
	scanf("%d" ,&units);
	
	if( units<0)
	{
		printf(" Invalid input");
		return 1;
	}
	if( units<=200)
	{
		charge= units*0.8;
    }
    else if( units<=300)
    {
    	charge= 0.8*200+ 0.9*(units - 200);
    }
    else
    {
    	charge= 0.8*200+0.9*100+1*(units-300);
    }
    	total= charge + METER_CHARGE;
    
	if(total>400)
	{
		total= total+0.15*total;
	}
	printf(" Electricity Bill \n");
	printf("                  \n");
	printf("Name : %s \n", name);
	printf(" Units : %d \n", units);
	printf(" Amount: %.2f \n", total);
	return 0;
}
	 
	

