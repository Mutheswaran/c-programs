#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
	if(a>b)
	printf("%d is a maximum number\n",a);
	else
	printf("%d is a maximum number\n",b);	
}