#include <stdio.h>

int main()
{
    float sum=0;
    int k;
    scanf("%d",&k);
    for(int i=1;;i++)
    {
        sum=sum+((float)1/i);
        if(sum>k)
        {
            printf("%d",i);
            break;
        }
    }
}  