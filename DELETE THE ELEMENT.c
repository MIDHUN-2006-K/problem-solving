#include <stdio.h>
int main() {
   int n,inp;
  printf("Enter size of array:");
  scanf("%d",&n);
   char arr[100];
arr[0]=0;
   printf("Enter the array:\n");
       for(int i=0;i<n;i++)
       {
       scanf("%d",&arr[i]);
 }
   
   printf("Enter the number to delete:");
   scanf("%d",&inp);
   
     arr[inp]=' ';
      for(int i=0;i<n;i++)
       {
           if(inp>n)
           {
               printf("Position out of range");
               break;
           }
           if(inp<0)
           {
               printf("Invalid input");
               break;
           }
           if(arr[i]==' ')
           {
               continue;
           }
       printf("%d",arr[i]);
 }
    return 0;
}

