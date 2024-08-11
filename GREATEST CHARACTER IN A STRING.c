#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() 
{
    char s[100];
    char p[100];
    char x[100];
    scanf("%s",s);
    int y=0,z=0,d=0;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
            z++;
        }
        else
        {
            y++;
        }
    }
    int count=0,count1=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(s[i]==s[j] &&  i!=j)
            {
                p[count]=s[i];
                s[i]=' ';
                s[j]=' ';
                count++;
            }
            else
            {
                d=0;
            }
        }
        if(d==0)
        {
            count1+=0.5;
        }
    }
    p[count]='\0';
     printf("%s",x);
    int c=0;
    for(int i=0;i<count;i++)
    {
        if(p[i]==' ')
        {
            continue;
        }
        else
        {
            x[c]=p[i];
            c++;
        }
    }
    int m=x[0];
    for(int i=0;i<c;i++)
    {
        if(x[i]>m)
        {
            m=x[i];
        }
    }
    if(y==l||z==l||count1==l)
    {
        printf("No characters found");
        return 0;
    }
    else
    {
    printf("%c",m-32);
    return 0;
    }
}
