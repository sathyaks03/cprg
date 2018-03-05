#include <stdio.h>

int main()
{
    int prod=1,i,num;
    
     scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        prod=prod*i;
    }
         printf("%d",prod);
    
    
    return 0;
}
