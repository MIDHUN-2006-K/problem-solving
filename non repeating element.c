#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
int main()
{
int count = 0;
char arr[100];
scanf(&quot;%[^\n]s&quot;,arr);
int n=strlen(arr);
for(int i=0;i&lt;n;i++)
{
count = 0;
for(int j=i+1;j&lt;n;j++)
{
if(arr[i]==arr[j])
{
count++;

arr[i]=&#39; &#39;;
arr[j]=&#39; &#39;;
}
}
if(count == 0 )
{
printf(&quot;%c&quot;,arr[i]);
return 0;
}
if( arr[i] == &#39; &#39;)
{
printf(&quot;no non repeating element&quot;);
return 0;
}
}
}
