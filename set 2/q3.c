#include <stdio.h>

int main()
{
    int i,num,bool=0;
    
     scanf("%d",&num);
    
    for(i=2;i<num-1;i++)
    {
       if(num%i==0)
       
       {
           bool=1;
           break;
       }
    }
    if(bool==1)
    printf("no");
    else
    printf("yes");
       
    
    
    return 0;
}
