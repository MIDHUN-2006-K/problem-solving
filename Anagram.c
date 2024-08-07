#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char s[100];
    char t[100];
    fgets(s,100,stdin);
    fgets(t,100,stdin);
    int l1=strlen(s);
    int l2=strlen(t);
    for(int i=0;i<l1-1;i++)
    {
        if(s[i]==32 || s[i]>=97 && s[i]<=122)
        {
            continue;
            printf("1");
        }
        else
        {
            printf("Invalid character in first string");
            return 0;
        }
    }
    for(int i=0;i<l2-1;i++)
    {
        if(t[i]==32 || t[i]>=97 && t[i]<=122)
        {
            continue;
        }
        else
        {
            printf("Invalid character in second string");
            return 0;
        }
    }
    if(l1!=l2)
    {
        printf("  false");
    }
    else
    {
        for(int i=0;i<l1;i++)
        {
            for(int j=0;j<l2;j++)
            {
                if(s[i]==t[j])
                {
                    count++;
                    t[j]=' ';
                }
            }
        }
        if(count==l1)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}
