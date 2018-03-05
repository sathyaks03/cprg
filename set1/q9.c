#include <stdio.h>

int main()
{
    int a[100],i,sum=0,n,k;
    
     scanf("%d%d",&n,&k);
     for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
     
    for(i=1;i<=k;i++)
     sum=sum+a[i];
     
     printf("%d",sum);
     
    
    return 0;
}
