#include<stdio.h>
#include<stdlib.h>
void main(){
int h,n,c=0,b;
printf("enter head: ");
scanf("%d",&h);
printf("enter req limit: ");
scanf("%d",&n);
printf("enter requests ");
int r[n];
for(int i=0;i<n;i++)
scanf("%d",&r[i]);
for(int i=0;i<n;i++){
b=abs(h-r[i]);
c=c+b;
printf("head movt from %d to %d=%d\n",h,r[i],b);
h=r[i];
}
printf("total head movt=%d\n",c);
}

