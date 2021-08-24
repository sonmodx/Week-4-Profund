#include<stdio.h>
int main()
{
	int n,temp;
	float a[10];
	float Q3;
	for (int i=0;i<9;i++)
	{
		scanf("%f",&a[i]);
	}
	for (int i=1;i<=9;i++)
	{
		for (int j=0;j<9-i;j++)
		{
			if (a[j]>a[j+1])
			{
			temp = a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	Q3 = (a[6]+a[7])/2;
	printf("%.2f", Q3);
	return 0;
}
