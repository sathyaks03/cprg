#include <stdio.h>

int main()
{
    int i,r1,r2;
    
     scanf("%d%d",&r1,&r2);
    
    for(i=r1+1;i<r2;i++)
    {
       if(i%2!=0)
       printf("%d ",i);
    }
       
    
    
    return 0;
}
