#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    int cur,prev=0,total=0;
    for(int i=0;i<len;i++)
    {
        switch(s[i])
        {
            case 'I':cur=1;break;
            case 'V':cur=5;break;
            case 'X':cur=10;break;
            case 'L':cur=50;break;
            case 'C':cur=100;break;
            case 'D':cur=500;break;
            case 'M':cur=1000;break;
            default:printf("Invalid");return 0;
        }
        if(prev<cur)
        {
            total+=(cur-2*prev);
        }
        else
        {
            total+=cur;
        }
        prev=cur;
    }
    printf("%d",total);
    return 0;
}
