#include <stdio.h>

int main()
{
    int num,temp,sum=0;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        sum=sum*10+temp%10;
        temp/=10;
    }
    printf("%d",sum);
    return 0;
}

