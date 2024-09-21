#include<stdio.h>
#include<stdlib.h>

void main()
{
int num,i,j,temp,n;
float sumtat=0,sumwt=0;
printf("Enter the number of processes: ");
scanf("%d",&num);
int bt[num],exet[num],tat[num],wt[num],pri[num];
printf("Enter the burst time of each process:\n");
for(i=0;i<num;i++)
{
scanf("%d",&bt[i]);
}
printf("Enter the priority of each process:\n");
for(i=0;i<num;i++)
{
scanf("%d",&pri[i]);
}
//SORT BASED ON priority
for(i=0;i<num;i++)
{
for(j=0;j<num-i-1;j++)
{
if(pri[j]>pri[j+1])
{
temp=pri[j];
pri[j]=pri[j+1];
pri[j+1]=temp;

temp=bt[j];
bt[j]=bt[j+1];
bt[j+1]=temp;
}}}
//Execution time
exet[0]=bt[0];
for(i=0;i<num;i++)
{

exet[i]=exet[i-1]+bt[i];
}
//Turn Around Time
for(i=0;i<num;i++)
{
tat[i]=exet[i];
}
//Waiting Time
for(i=0;i<num;i++)
{
wt[i]=tat[i]-bt[i];
}
//avg Turn Around Time
for(i=0;i<num;i++)
{
sumtat=sumtat+tat[i];
}
//avg Waiting Time
for(i=0;i<num;i++)
{
sumwt=sumwt+wt[i];
}

printf("PROCESS\tBURST TIME\tPRIORITY    \tTAT\tWT\n");
for(i=0;i<num;i++)
{
printf("P%d\t%d\t\t%d\t\t%d\t%d\n",i,bt[i],pri[i],tat[i],wt[i]);
}
printf("\nTotal Turn Around Time=%.2f\n",sumtat);
printf("Total Waiting Time=%.2f\n",sumwt);
printf("Average Turn Around time=%.2f\n",sumtat/num);
printf("Average Waiting time=%.2f\n\n",sumwt/num);
//Gantt Chart
printf("---------------------\n");
for(i=0;i<num;i++)
{
printf("| P%d ",i);
}
printf("\n---------------------\n");
printf("0");
for(i=0;i<num;i++)
{
printf("   %d",exet[i]);
}
printf("\n");
}
