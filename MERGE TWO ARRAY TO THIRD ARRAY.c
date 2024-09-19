#include <stdio.h>
int main() {
    int n,l;
    printf("Enter size of first array:");
    scanf("%d",&n);
    printf("Enter size of second array:");
    scanf("%d",&l);
    int arr1[n],arr2[l],arr3[n+l];
    printf("Enter first array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array:\n");
    for(int i=0;i<l;i++)
{
    scanf("%d",&arr2[i]);
}
for(int i=0;i<n;i++)
{
    arr3[i]=arr1[i];
}
int m=0,temp;
for(int i=l;i<n+l;i++)
{
    arr3[i]=arr2[m];
     m++;
}
for(int i=0;i<n+l;i++)
{
    for(int j=i+1;j<n+l;j++)
    {
 if(arr3[i]>arr3[j])
 {
  temp=arr3[i];
  arr3[i]=arr3[j];
  arr3[j]=temp;
 }
}
}
for(int i=0;i<n+l;i++)
{
    printf("%d",arr3[i]);
}
    return 0;
}
