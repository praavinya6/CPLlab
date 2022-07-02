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
	nume=x;
	deno=1;
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
	printf("taylor series computed value= cos(%f)=%f\n",degree,sum);
    printf("value of cos(%f)=%f\n", degree,cos(x));
    return 0;
 }
