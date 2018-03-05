#include <stdio.h>
#include<string.h>
int main()
{
   char s[10];
   gets(s);
   int l=strlen(s);
   
   s[l]='.';
   s[l+1]='\0';
   printf("%s",s);
    return 0;
}
