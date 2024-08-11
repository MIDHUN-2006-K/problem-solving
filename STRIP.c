#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() 
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int c=0;
    int a=0,b=l-1;
    for(int i=0;i<l;i++)
    {
        char p=s[a];
        char k=s[b];
         if(p==k)
         {
            for(int i=0;i<l;i++)
            {
                if(p==s[i])
                {
                    s[i]=' ';
                }
                else
                {
                    a=i;
                }
            }
            for(int i=l-1;i>=0;i--)
            {
                if(k==s[i])
                {
                    s[i]=' ';
                }
                else
                {
                    b=i;
                }
            }
         }
         else
         {
            break;
         }
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        else
        {
            c++;
            
        }
    }
    printf("%d",c);
}
