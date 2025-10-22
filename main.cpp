#include<stdio.h>
#include<string.h>

int main()
{
	int ro, num;
	int ar[10000];
	int b, e;
	int sum = 0;

	memset(ar, 0,sizeof(ar));
	scanf_s("%d %d",&ro,&num);
	
	for (int k = 0; k < num;k++) 
	{
		scanf_s("%d %d", &b, &e);
		if(e>ro)
		{
			return 0;
		}
		for (int j = b; j < e; j++)
		{
			ar[j] = 1;
		}
	}
	for(int i=0;i<10000;i++)
	{ 
		
		if(ar[i]==0)
		{
			sum++;
		}
	}
	printf("%d",sum);
}
