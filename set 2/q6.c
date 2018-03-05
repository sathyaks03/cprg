#include <stdio.h>

int main()
{
    int i,j,r1,r2,bool,num;
    
     scanf("%d%d",&r1,&r2);
    for(j=r1+1;j<r2;j++)
    {
        num=j;
    bool=0;
    for(i=2;i<num-1;i++)
    {
       if(num%i==0)
       
       {
           bool=1;
           break;
       }
    }
    if(bool==1)
    printf("");
    else
    printf("%d ",num);
       
    }
    
    return 0;
}
