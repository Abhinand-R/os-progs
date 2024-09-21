#include<stdio.h>

int main(){
int n;
float avgtat=0,avgwt=0;
printf("enter no of process");
scanf("%d",&n);
int tat[n],bt[n],wt[n],bt1[n],exet[n];
for(int i=0;i<=n-1;i++){
printf("enter burst tym of p%d ",i);
scanf("%d",&bt[i]);
bt1[i]=bt[i];

}


for(int i=0;i<n;i++){
tat[i]=bt1[i];

bt1[i+1]=bt1[i]+bt1[i+1];

//}
//for(int i=0;i<=n-1;i++){

wt[i]=tat[i]-bt[i];
}
printf("process BT      TAT     WT\n");
for(int i=0;i<=n-1;i++){
printf("p%d\t%d\t%d\t%d\t",i,bt[i],tat[i],wt[i]);
printf("\n");
avgtat=avgtat+tat[i];
avgwt=avgwt+wt[i];
}
printf("Total TAT=%f\nTotal WT=%f\nAvg TAT=%f\nAvg WT=%f\nGantt chart\n",avgtat,avgwt,(avgtat/n),(avgwt/n));
for(int i=0;i<=n-1;i++){
printf("-------");

}

printf("\n");
for(int i=0;i<=n-1;i++){
printf("|p%d|\t",i);

}
printf("\n");
for(int i=0;i<=n-1;i++){
printf("-------");

}
printf("\n");
for(int i=0;i<=n-1;i++){
printf("  %d\t",tat[i]);

}

}
