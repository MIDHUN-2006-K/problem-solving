#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],temp=0;
   for(int i=0;i<n;i++)
   {
        scanf("%d",&arr[i]);
   }
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]==0)
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

 return 0;
}
