#include <stdio.h>
int main() {
    int a,b=0;
    printf("Enter size of array:");
    scanf("%d",&a);
    int arr[100];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {    
           if(arr[i-1]==arr[j])
           {
               continue;
           }
            if(arr[i]==arr[j])
            {
                b++;
            }
        }
    }
    printf("Output:%d",b);
    return 0;
}
