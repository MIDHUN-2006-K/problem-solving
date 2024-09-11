#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int j,start,end;
    char s[100];
    scanf("%s",s);
    int x;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        for( j=i;j<len;j++){
            start = i;
            end = j;
            x=1;
            while(start<end)
            {
                if(s[start]!=s[end])
                {
                    x=0;
                    break;
                }
                start++;
                end--;
            }
        
        if(x==1)
        {
            for(int k=i;k<=j;k++)
            {
                printf("%c",s[k]);
            }
            printf("\n");
        }
        }
    }
}
