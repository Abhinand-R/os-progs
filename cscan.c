#include<stdio.h>
#include<stdlib.h>
void main(){
int h,n,c=0,b,temp,s,l;
printf("enter head: ");
scanf("%d",&h);
printf("enter req limit: ");
scanf("%d",&n);
printf("enter last limit: ");
scanf("%d",&l);
printf("enter requests ");
int r[n];
for(int i=0;i<n;i++)
scanf("%d",&r[i]);
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(r[j]>r[j+1]){
temp=r[j];
r[j]=r[j+1];
r[j+1]=temp;
}
}
}
for(int i=0;i<n;i++){
if(h<r[i]){
s=i;
break;
}
}



for(int i=s;i<n;i++){
b=abs(h-r[i]);
c=c+b;
printf("head movt from head %d to %d=%d\n",h,r[i],b);
h=r[i];
if(i==n-1){
c=c+(l-r[i]);
printf("head movt from head %d to %d=%d\n",r[i],l,(l-r[i]));
}
}
c=c+l;
printf("head movt from head %d to 0=%d\n",l,l);
h=0;
for(int i=0;i<s;i++){
b=abs(h-r[i]);
c=c+b;
printf("from head %d to %d=%d\n",h,r[i],b);
h=r[i];
}
printf("total head movt=%d\n",c);

}
