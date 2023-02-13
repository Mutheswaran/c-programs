# include <stdio.h>
int main()
{
	int a[100],n,i,avg=0,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements in the array:\n");
	for (i=1;i<n;i++)
		scanf("%d ",& a[i]);
	for (i=1;i<n;i++)
		sum = sum+a[i];
		avg = sum/n;
	printf("\nSum = %d ",sum);
	printf("\nAverage = %d ",avg);
	return(0);
}
