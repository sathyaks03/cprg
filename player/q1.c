#include <stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int i=0;
    scanf("%s",s);
    while(s[i]!='\0')
    {
    i++;
    }
   
    int j=0;
    while(i>=0)
    {
        s1[j++]=s[i-1];
        i--;
    }
    s1[j]='\0';
    printf("%s",s1);

    return 0;
}
