#include <stdio.h>
#include <math.h>
int main()
{
    int i,num,sum,r,temp,count,r1,r2;
    scanf("%d%d",&r1,&r2);
    for(i=r1+1;i<r2;i++)
    {
        sum=0;
        count=0;
        num=i;
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
    printf("%d ",num);
    else
    printf("");
    }
    return 0;
}
