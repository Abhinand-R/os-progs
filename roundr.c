#include<stdio.h>

void main(){
static int j =0;
int n,i,ti,count=0,flag=1,sum=0;
printf("Enter the number of Processes : ");
scanf("%d",&n);

int a[100],c,bt[n],b[n],ct[n],tat[n],wt[n],at[n];

//Entering burst time
printf("Enter the Burst time : \n");
for(i=0;i<n;i++){
printf("P%d : ",i);
scanf("%d",&bt[i]);
at[i]=0;
ct[i]=0;
}

for(i=0;i<n;i++){
b[i]=bt[i];
printf("%d ",b[i]);
}

printf("\nEnter the Time quantum : ");
scanf("%d",&ti);

for(i=0;i<n;i++)
sum = sum + bt[i];

printf("\n--------GANTT CHART--------\n");
printf("| ");

while(c!=sum){
for(i=0;i<n;i++){
if(bt[i]!=0){
if(bt[i]<ti){
c=c+bt[i];
bt[i]=bt[i]-bt[i];
if(bt[i]==0)
ct[i]=c;
}
else if(bt[i]>=ti){
c=c+ti;
bt[i]=bt[i]-ti;
if(bt[i]==0)
ct[i]=c;
}
}
a[j++]=c;
printf("P%d |\t",i);
}
}

printf("\n---------------------------\n");
printf("| ");
for(i=0;a[i]!=0;i++){
printf("%d |\t",a[i]);
}
printf("\n---------------------------\n");

//Calculating TAT
for(i=0;i<n;i++){
tat[i]= ct[i]-at[i];
}

//Calculating WT
for(i=0;i<n;i++){
wt[i]=tat[i]-b[i];
}

//TABLE
printf("\nProcess\tB.T\tTAT\tWT");
for(i=0;i<n;i++){
printf("\nP%d\t%d \t%d \t%d",i,b[i],tat[i],wt[i]);
}

float tsum=0.0,wsum=0.0;
for(i=0;i<n;i++){
tsum =tsum+tat[i];
}
printf("\n\nTotal Turn Around Time : %f",tsum);

for(i=0;i<n;i++){
wsum =wsum+wt[i];
}
printf("\nToatal Waiting Time : %f",wsum);
float tavg=(tsum/n),wavg=(wsum/n);
printf("\n\nAverage of Turn Around Time : %f",tavg);
printf("\nAverage of Waiting Time : %f",wavg);

//printing Completion Time
//printf("Complition Time :\n");
//for(i=0;i<n;i++){
// printf("%d ",ct[i]);
//}

}
