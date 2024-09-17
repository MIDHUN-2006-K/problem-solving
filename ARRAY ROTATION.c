#include <stdio.h>
int main() {
 int n,d;
 printf("Enter the size of array:\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the array:\n");
 for(int i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("Number of positions to rotate:");
 scanf("%d",&d);
 
 int temp1[n-d],temp2[d];
 int m=0;
 for(int i=d;i<n;i++)
 {
     temp1[m]=arr[i];
     m++;
 }
 for(int i=0;i<d;i++)
 {
     temp2[i]=arr[i];
 }
for(int i=0;i<n-d;i++)
 {
     printf("%d",temp1[i]);
 }
 for(int i=0;i<d;i++)
 {
     printf("%d",temp2[i]);
 }
 return 0;
}
