#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    char a[100];
    char b[100];
    scanf("%s",s);
    int n=strlen(s);
    int x,count,y;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(s[i]==s[j])
            {
                x=0;
                y=0;
                count=0; 
                for(int k=i;k<=j;k++)
                {
                    a[x]=s[k];
                    x++;
                }
                for(int k=x-1;k>=0;k--)
                {
                    b[y]=a[k];
                    y++;
                }
                for(int m=0;m<y;m++)
                {
                    if(a[i]==b[i])
                    {
                        count++;
                    }
                    else{
                        break;
                    }
                }
                if(count==x)
                {
                    for(int m=0;m<x;m++)
                    {
                        printf("%c",b[m]);
                    }
                    return 0;
                }
                
                else
                {break;
                }
            }  
        }
    } 
}
