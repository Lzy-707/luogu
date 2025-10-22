#include<stdio.h>

int main()
{
	int s, ex;
	int week[8];
	int most=1;

	for (int i = 1; i <=7;i++)
	{
		scanf_s("%d %d",&s,&ex);
		if(s>10||ex>10)
		{
			printf("error");
			return 0;
		}
		week[i] = s + ex;

		if (week[i] >= 8)
		{
			if (week[i] > week[most])
			{
				most = i;
			}
			else if (week[i] == week[most])
			{
				most = most;
			}
		}
	}
	printf("%d",most);
}