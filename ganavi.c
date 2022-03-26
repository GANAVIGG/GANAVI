#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,totalwords;
totalwords=1;
printf("\n please enter any string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if (str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
totalwords++;
}
}
printf("\n the total number of words in this string %s=%d",str,totalwords);
return 0;
}
