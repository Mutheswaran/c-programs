#include<stdio.h>
int main()
{
	int a[100],i=0,n;
	int *p=a;
	printf("Input the number of elements to store in the array : ");
	scanf("%d",&n);
	printf("Input %d number of elements in the array : \n",n);
	for (i=0;i<n;i++)
	{
		printf("element - %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("The elements you entered are : \n");
	for (i=0;i<n;i++)
	{
		printf("element - %d : %d\n",i,*(p));
		p++;
	}
	return 0;
}