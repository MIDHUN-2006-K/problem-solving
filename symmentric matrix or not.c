#include<stdio.h>
int main(){
    int n,m,x;
    printf("enter the row size :");
    scanf("%d",&n);
    printf("enter the coloumn size :");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter the element[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    if(n!=m)
    {
        printf("not symmetric");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                x=1;
            }
            else
            {
                printf("not symmentric\n");
                return 0;
            }
        }
    }
    if(x==1)
    {
        printf("symmentric");
    }
    return 0;
}
