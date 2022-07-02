#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	float x,degree;
	printf("enter degree:\n");
	scanf("%f",&degree);
	x=degree*(PI/180);
	//initialization
	float nume,deno,sum,i,term;
	num=x;
	den=1;
	i=1;
	sum=0;
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*i*(i-1);
    }
	    
	while(fabs(term)>0.000001);
	
	printf("taylor series computed value= sin(%f)=%f\n",degree,sum);
    printf("value of sin(%f)=%f\n", degree,sin(x));
    return 0;
} 
	    
