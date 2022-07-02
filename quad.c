//Program to compute roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{	
// Variable declaration
	 
  	float a,b,c,d,r1,r2,rp,ip;
   	
	//Accept operator
	printf("Enter three coefficients :");
	scanf("%f%f%f", &a,&b,&c);
   
  	if(a==0)
   	{
	   	printf("A is not quadratic equation");
		return 1;
    }

  	d= b*b-4*a*c;
  	if(d==0)
 	{ 
		printf("roots are real and equal \n");
		r1=r2= -b/(2*a);
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("r1=%f \n r2=%f \n",r1,r2);
    }
    else if(d>0)
    {
		printf(" roots are real and distinct \n");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("r1=%f\n r2=%f\n",r1,r2);
    }
 	else 
    {
		printf("roots are imaginary");
		rp=-b/(2*a);
		ip=sqrt(-d)/(2*a);
		printf("r1=%f+i%f\n",rp,ip);
		printf("r2=%f-i%f\n",rp,ip);
    }
    return 0;
}
      
     
       
     
     

	  
	
