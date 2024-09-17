#include<stdio.h>
int main()
{
    int n;
    int count;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                b[j]=' ';
                count++;
            }
        }
        if(count!=0)
        {
            printf("%d occurs %d times\n",a[i],count);
        }
    }
}
