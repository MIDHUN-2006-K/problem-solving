#include<stdio.h>
#include<string.h>
int main()
{
    int arr[4];
    printf("Enter the digits : ");
    for(int i=0;i<4;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int maxtime = -1;
    int hh, mm;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(j == i)
            {
                continue;
            }
            for(int k=0;k<4;k++)
            {
                if(k == i || k == j)
                {
                    continue;
                }
                int l = 6 - i - j - k;
                
                int hours = arr[i] * 10 + arr[j];
                int minutes = arr[k] * 10 + arr[l];
                
                if(hours < 24 && minutes <59)
                {
                    int totalminutes = hours * 60 + minutes;
                    if(totalminutes > maxtime)
                    {
                        maxtime = totalminutes;
                        hh = hours;
                        mm = minutes;
                    }
                }
            }
            
        }
    }
    if(maxtime == -1)
    {
        printf("No valid time is found\n");
    }
    else
    {
        printf("Latest time : %02d:%02d", hh, mm);
    }
}
