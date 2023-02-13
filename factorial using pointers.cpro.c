#include <stdio.h>
void factorial(int,int*);
int main()
{
        int fact,n;	
		printf(" Input a number : ");
		scanf("%d",&n);		 
        factorial(n,&fact);
        printf("The Factorial of %d is : %d \n\n",n,fact);
        return 0;
}
void factorial(int n,int *f)
		{
        	int i;
       		*f =1;
       		for(i=1;i<=n;i++)
       		*f=*f*i;
       	}