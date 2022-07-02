#include <stdio.h>
int main()
{
	int m,n,p,q;
	
	printf(" Enter number of rows and columns for matrix A:");
	scanf("%d%d", &m,&n);
	
    printf(" Enter number of rows and columns for matrix B:");
	scanf("%d%d", &p,&q);
	
	if(n!=p)
	{
		printf(" Multiplication is not possible");
		return 1;
	}
	
	int A[m][n], B[p][q], c[m][q];
	
	printf("Enter elements into Matrix A \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			scanf("%d", &A[i][j]);
		}
   }
	printf("Enter elements into Matrix B \n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{ 
			scanf("%d", &B[i][j]);
		}
	}
   
    printf("\n MATRIX A \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n MATRIX B \n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{ 
			printf("%d\t", B[i][j]);
		}
		printf("\n");
    }
	printf(" VALUE OF A*B=");	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
		    int sum=0;
			for(int k=0; k<n;k++)
			{ 
				sum=sum+A[i][k]*B[k][j];
				c[i][j]=sum;
			}
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
	      printf("%d\t",c[i][j]);
	    }
	   printf("\n");
	}
	return 0;
 }
						
		
	
