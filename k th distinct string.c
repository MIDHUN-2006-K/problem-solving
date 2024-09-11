#include<stdio.h>
#include<string.h>
int main()
{
    int a,z=0, y=0,k;
    printf("Enter the number of elements to store in array : ");
    scanf("%d", &a);
    
    getchar();
    
    char s[a][100];
    char r[a][100];
    
    for(int i=0;i<a;i++)
    {
        scanf("%[^\n]%*c", s[i]);
    }
    
    for(int i=0;i<a;i++)
    {
        z=0;
        for(int j=0;j<a;j++)
        {
         
            if(strcmp(s[i],s[j]) == 0 && i!=j)
            {
                z++;
                break;
            }
        }
        if(z==0)
        {
            strcpy(r[y],s[i]);
            y++;
        }
    }
    printf("Enter the number of the distinct  : ");
    scanf("%d", &k);
    printf("K = %d\n", k);
    
    if(k > y)
    {
        printf(" \"\" ");
    }
    for(int i=0;i<y;i++)
    {
        if(k == i + 1)
        {
            printf("%s", r[i]);
        }
    }
    
}
