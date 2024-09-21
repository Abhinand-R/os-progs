#include <stdio.h>
void main()
{
int n, m, i, j, k;
printf("Enter the number of process:");
scanf("%d",&n);
printf("Enter the number of resources:");
scanf("%d",&m);
int alloc[n][m],max[n][m],avail[m],f[n],a[n],ind=0,need[n][m];
for(i=0;i<n;i++)
{
printf("Enter the allocation of the process P%d: ",i);
for(j=0;j<m;j++)
{
scanf("%d",&alloc[i][j]);
}
}
for(i=0;i<n;i++)
{
printf("Enter the maximum of the process P%d: ",i);
for(j=0;j<m;j++)
{
scanf("%d",&max[i][j]);
}
}
printf("Enter the available: ");
for(i=0;i<m;i++)
{
scanf("%d",&avail[i]);
}
for(i=0;i<n;i++)
{
f[i]=0;
}
for(i=0;i<n;i++)
{
for (j=0;j<m;j++)
need[i][j]=max[i][j]-alloc[i][j];
}
printf("\n\tAlloc\tMax\tNeed\n");
for(i=0;i<n;i++)
{
printf("P%d\t",i);
for(j=0;j<m;j++)
{
printf("%d ",alloc[i][j]);
}
printf("\t");
for(j=0;j<m;j++)
{
printf("%d ",max[i][j]);
}
printf("\t");
for(j=0;j<m;j++)
{
printf("%d ",need[i][j]);
}
printf("\n");
}
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
if(f[i]==0)
{
int flag=0;
for(j=0;j<m;j++)
{
if(need[i][j]>avail[j])
{
flag=1;
break;
}
}
if(flag==0)
{
a[ind++]=i;
for(j=0;j<m;j++)
{
avail[j]=avail[j]+alloc[i][j];
}
f[i]=1;
}
}
}
}
int flag=1;
for(int i=0;i<n;i++)
{
if(f[i]==0)
{
flag=0;
printf("The system is not in safe state!!\n");
break;
}
}
if(flag==1) 
{
printf("\nSafe Sequence:\n");
for(i=0;i<n-1;i++)
{
printf("P%d->",a[i]);
}
printf("P%d ",a[n-1]);
}
}
