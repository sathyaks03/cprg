#include <stdio.h>
#include <math.h>
int main()
{
    int num,sum=0,r,temp,count=0;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
   temp=num;
   while(temp>0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
    }
    if(num==sum)
    printf("Yes");
    else
    printf("no");
    return 0;
}

