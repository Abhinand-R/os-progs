#include<stdio.h>
void main()
{
int n,i,temp,j;
int count=0;
count++;
printf("Enter the limit\n");
count++;
scanf("%d",&n);
count++;
int a[n];
printf("Enter the array elements\n");
count++;
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
}
count++;
for(i=0;i<n;i++)
{
count++;
for(j=i+1;j<n;j++)
{
count++;
if(a[i]>a[j])
{
temp=a[i];
count++;
a[i]=a[j];
count++;
a[j]=temp;
count++;
}
count++;
}
count++;
}
count++;
printf("The sorted array:\n");
count++;
for(i=0;i<n;i++)
{
count++;
printf("%d\n",a[i]);
count++;
}
count++;
printf("\nThe space complexity is %d",20+(4*n));
count++;
printf("\nThe time complexity is %d",++count);
}
