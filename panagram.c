#include <stdio.h>
#include <string.h>
int main() 
{
    char a[100];
    scanf("%s",a);
    int l=strlen(a);
    int x=0;
    char b[]="abcdefghijklmnopqrstuvwxyz";
    if(l<26)
    {
        printf("FALSE");
        return 0;
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(a[i]==b[j])
            {
                a[i]=' ';
                b[i]=' ';
                x=1;
                break;
            }
            else
            {
                x=0;
                break;
            }
        }
    }
    if(x==1)
    {
        printf("TRUE");
    }
    return 0;
}
