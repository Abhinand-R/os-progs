#include<stdio.h>
struct process{
int p,ct,bt,tat,wt;
};
void main()
{
int n,i,j,sumtat=0,sumwt=0;
printf("Enter the number of processes :");
scanf("%d",&n);
struct process p[n];
for(i=0;i<n;i++)
{
p[i].p=i+1;
printf("Enter the burst time of processes %d:",i+1);
scanf("%d",&p[i].bt);
}
//sorting
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(p[j].bt>p[j+1].bt)
{
struct process temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
}
//Gantt Chart
printf("\n-----------------\n|");
for(i=0;i<n;i++)
{
printf("P%d |",p[i].p);
if(i==0){
p[0].ct=p[0].bt;}
else{
p[i].ct=p[i-1].ct+p[i].bt;}
}
printf("\n-----------------\n");
printf("0");
for(i=0;i<n;i++)

{
printf("   %d",p[i].ct);
p[i].tat=p[i].ct;//tat
p[i].wt=p[i].tat-p[i].bt;//wt
sumtat+=p[i].tat;//totaltat
sumwt+=p[i].wt;//totalwt
}
//sorting according to process
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(p[j].p>p[j+1].p)
{
struct process temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
}
}
}
//Table
printf("\nPROCESS BT      TAT     WT\n");
for(i=0;i<n;i++)
{
printf("P%d\t%d\t%d\t%d\n",p[i].p,p[i].bt,p[i].tat,p[i].wt);
}
printf("\n");
printf("Total Turn Around Time : %d\n",sumtat);
printf("Total Waiting Time : %d\n",sumwt);
printf("Average Turn Around Time : %.2f\n",(float)sumtat/n);
printf("Average Waiting Time : %.2f\n",(float)sumwt/n);
}
