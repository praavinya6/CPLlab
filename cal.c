//Program to simulate a Simple Calculator
#include <stdio.h>
int main()
{	
// Variable declaration 
	int num1,num2,res;
	char op;	
	//Accept operator
	printf("Enter an arithmetic operator :");
	scanf("%c",&op);
	
	//Accept two integers 
	printf(" Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	
	if(op =='+')
	  {
		res = num1+num2;
	  }
	else if(op == '-')
	  {
		res= num1-num2;
	  }
	else if(op =='*')
	  {
		res= num1*num2;
      }
	else if (op =='/')
	  {
		if(num2==0)
	  {
	    printf("Divide by zero Error\n");
	    return 1;
	  }    
	else 
	  {   res= num1/num2;
	  }
	}    
	else if(op =='%') 
	  {
	    if(num2 == 0)
	  {
	   printf("Divide by zero Error\n");
	   return 2;
      }
	else 
	  {    
	      res= num1%num2;
	  }
	  }
	else 
	{  printf("Invalid Operator");
			 return 1;
    }
	   printf("%d %c %d = %d", num1,op,num2,res);
       return 0;
   }
