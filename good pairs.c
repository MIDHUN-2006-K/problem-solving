#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter size:");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
