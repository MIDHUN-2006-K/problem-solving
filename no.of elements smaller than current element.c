#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                c++;
            }
        }
        printf("%d : %d\n",arr[i],c);
    }
}
