#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i=0,j=1,n,k=0,count=0;
	int a[100],b[100],c[100];
	printf("enter the input length of the frame");
	scanf("%d",&n);
	printf("\n enter the information in 0's and 1's:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			b[j]=a[i];
			count++;
			j++;
			if(count==5)
			{
				b[j++]=0;
				count=0;
			}
		}
		else if(a[i]==0)
		{
			b[j++]=a[i];
			count=0;
		}
	}
	printf("\n the information frame after stuffing:\n");
	printf("\n 01111110 \t");
	for(i=1;i<j;i++)
	printf("%d",b[i]);
	printf("\t 01111110");
	printf("\n destuffing\n");
	for(i=0;i<j;i++)
	{
		if(b[i]==1)
		{
			c[k]=b[i];
			k++;
			count++;
			if(count==5)
			{
				c[k]=b[++i];
				count=0;
			}
		}
		else if(b[i]==0)
		{
			c[k++]=b[i];
			count=0;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
	getch();
}
