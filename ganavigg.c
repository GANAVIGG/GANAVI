#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
float a[20],mean,sd,sum,var;
float *p;
printf("\nenter the number of elements:");
scanf("%d",&n);
printf("\nenter the elements:");
p=a;
for(i=0;i<n;i++)
{
scanf("%f",p);
p++;
}
p=a;
sum=mean=sd=var=0;
for(i=0;i<n;i++)
{
sum=sum+(*p);
p++;
}
mean=sum/n;
p=a;
for(i=0;i<n;i++)
{
var=(var+pow((*p-mean)),2);
p++;
}
var=var/n;
sd=sqrt(var);
printf("\n\nmean=%f\nsum=%f\nsd=%f\nvar=%f\n",mean,sum,sd,var);
return 0;
}
