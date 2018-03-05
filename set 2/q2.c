#include <stdio.h>

int main()
{
    int num,sum=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        sum=(sum*10)+(temp%10);
        temp=temp/10;
    }
   
    if(num==sum)
    printf("Yes");
    else
    printf("no");
    return 0;
}
