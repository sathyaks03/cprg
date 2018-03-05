#include <stdio.h>

int main()
{
    int prod=1,i=1,num;
    
     scanf("%d",&num);
    
    while(i<=num)
    {
        prod=prod*i;
        i++;
    }
         printf("%d",prod);
    
    
    return 0;
}
