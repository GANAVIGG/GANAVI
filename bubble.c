#include<stdio.h>
int main()
{
int a[20],n,i,j,temp,first,last,mid,key;
//accept array size
printf("enter the number of element:");
scanf("%d",&n);
//accept n elements into the array
printf("enter %d integer: ",n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//sort the array elements
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++);
{
if (a[j]>a[j+1])
{
temp= a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
//print the sorted array
printf(" sorted array is...........\n");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
//print("\n");
}
printf("\nenter the key value to be searched");
scanf("%d",&key);
first=0;
last=n-1;
while(first<=last)
{
mid=(first+last)/2;
if(key==a[mid])
{
printf("the element %d found at location%d \n",key,mid+1);
return 0;
}
else if(key<=a[mid])
{
last=mid-1;
}
else if(key>=a[mid])
{
first=mid+1;
}
}
printf("\n element %d not found in given array",key);
return(1);
}

