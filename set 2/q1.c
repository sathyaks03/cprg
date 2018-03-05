#include <stdio.h>

int main()
{
    int prod=1,i,num,p;
    
     scanf("%d%d",&num,&p);
    if(p>=0)
    {
    for(i=0;i<p;i++)
    {
        prod=prod*num;
    }
         printf("%d",prod);
    } 
    
    return 0;
}
