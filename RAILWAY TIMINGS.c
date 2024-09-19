#include<stdio.h>
int p(int x)
    {
        switch(x)
        {
            case 1:
            printf(" Hours\n");
            break;
            case 2:
            printf(" Minutes\n");
            break;
            case 3:
            printf(" Seconds\n");
            break;
        }
    }
int main()
{
    char arr[8],b[8];
    int count=0,x=0;
    scanf("%s",arr);
    for(int i=0;i<8;i++)
    {
        if(arr[i]==':')
        {
            continue;
        }
        else
        {
            b[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        if(i<2)
        {
            printf("%c",b[i]);
            x=1;
            
            if(i==1)
            {
                p(x);
            }
        }
        if(i >= 2 && i< 4 )
        {
            printf("%c",b[i]);
            x=2;
            
            if(i==3)
            {
                p(x);
            }
        }
        if(i >= 4 && i< 6 )
        {
            printf("%c",b[i]);
            x=3;
            
            if(i==5)
            {
                p(x);
            }
        }
    }
}
