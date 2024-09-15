#include <stdio.h>
int main() {
    int a;
    printf("Enter size of array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0],small=arr[0];
    for(int i=0;i<a;i++)
    {
            if(large<arr[i])
            {
                large=arr[i];
            }
            if(small>arr[i])
            {
                small=arr[i];
            }
    }
    printf("Large:%d \nSmall:%d",large,small);
    return 0;
}

