#include &lt;stdio.h&gt;
#include&lt;string.h&gt;
int main() {
char arr[100];
scanf(&quot;%[^\n]s&quot;,&amp;arr);
int n=strlen(arr);
for(int i=0;i&lt;n;i++)
{
if(arr[i]==&#39;a&#39;)
{

arr[i]=&#39;b&#39;;
}
if(arr[i]==&#39;t&#39;)
{
arr[i]=&#39;g&#39;;
}
if(arr[i]&lt;=57 &amp;&amp; arr[i]&gt;=48)
{
arr[i]=&#39;n&#39;;
}
}
for(int i=0;i&lt;n;i++)
{
printf(&quot;%c&quot;,arr[i]);
}
return 0;
}
