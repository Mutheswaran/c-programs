#include<stdio.h>
int add(int *x,int *y)
	{
        return(*x + *y);
	}
int main()
	{
		int a,b,c;
		printf("Input the first number : ");
		scanf("%d",&a);
		printf("\nInput the second number : ");
		scanf("%d",&b);
		c=add(&a,&b);
		printf("The sum of %d and %d is %d",a,b,c);
		return 0;
	}
