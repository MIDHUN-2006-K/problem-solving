#include <stdio.h>
#include<string.h>

int main ()
{
  int i, j, val = 0;
  int a=0,b=0,c=0;
  char array[200];
  scanf ("%[^\n]s", array);
  int len = strlen (array);
  for (i = 0; i < len; i++)
  {
      if(array[i] == '(')
      {
        a++;
      }
      if(array[i] == ')')
      {
        a++;
      }
      if(array[i] == '[')
      {
        b++;
      }
      if(array[i] == ']')
      {
        b++;
      }
      if(array[i] == '{')
      {
        c++;
      }
      if(array[i] == '{')
      {
        c++;
      }
   }
   if(a%2==0 && b%2==0 && c%2==0)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}
