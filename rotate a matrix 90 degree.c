#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size :");
    scanf("%d",&n);
    m=n;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the element[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int temp=arr[0][0];
    arr[0][0]=arr[0][n-1];
    arr[0][n-1]=temp;
    
    temp=arr[n-1][0];
    arr[n-1][0]=arr[n-1][n-1];
    arr[n-1][n-1]=temp;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
