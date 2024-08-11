#include <stdio.h>
#include<string.h>
int main() {
     int lenght1,lenght2;
     char s1[100] ,s2[100];
     scanf("%[^\n]s",s1);
     scanf(" %[^\n]s",s2);
     lenght1=strlen(s1);
     lenght2=strlen(s2);
     int ones=0 ,two=0,no=0,n=0;
     for(int i =0 ; s1[i] != '\0' ; i++)
     {
         if(s1[i] >='a' && s1[i] <='z' || s1[i] >='A' && s1[i] <='Z')
         {
             continue;
         }
         else
         {
             no=1;
             break;
         }
     }
      for(int i =0 ; s2[i] != '\0' ; i++)
     {
         if(s2[i] >='a' && s2[i] <='z' || s2[i] >='A' && s2[i] <='Z')
         {
             continue;
         }
         else
         {
             n=1;
             break;
         }
     }
     if(no==1 || n==1 || lenght1<2 || lenght1>100 || lenght2<2 || lenght2>100)
     {
         printf("Please enter two different names of 2 to 100 characters long");
     }
     else
     {
     for(int i=0 ; i<lenght1 ;i++)
     {
         for(int j=0 ; j<lenght2 ; j++)
         {
             if(s1[i] == s2[j] && s1[i] != ' ' && s2[j] != ' ')
             {
                 s1[i]=' ';
                 s2[j] =' ';
                 
             }
         }
     }
     for(int i=0 ; i<lenght1;i++)
     {
         if(s1[i] != ' ')
         {
             ones++;
         }
     }
     for(int i=0 ; i<lenght2;i++)
     {
         if(s2[i] != ' ')
         {
             two++;
         }
     }
     printf("%d %d",ones,two);
     int total = ones+two;
     char flam[6]={'F','L','A','M','E','S'};
     int k=6,count=0;
     while(k!=1)
     {
         for(int i=0 ; i<6 ; i++)
         {
             if(flam[i] != ' ')
             {
                 count+=1;
                 if(count==total)
                 {
                     flam[i] = ' ';
                     k-=1;
                     count=0;
                 }
             }
         }
     }
     for(int i=0;i<6;i++)
     {
         if(flam[i] != ' ')
         {
             printf("\n%c",flam[i]);
         }
     }}
}
