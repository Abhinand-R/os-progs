#include<stdio.h>
#include<stdlib.h>
void main(){
int h,n,c=0,b,temp,s;
printf("enter head: ");
scanf("%d",&h);
printf("enter req limit: ");
scanf("%d",&n);
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

for(int i=s-1;i>=0;i--){
b=abs(h-r[i]);

c=c+b;
printf("head movt from %d to %d=%d\n",h,r[i],b);

h=r[i];
if(i==0){
c=c+r[i];
printf("head movt from %d to 0=%d\n",r[i],r[i]);

}
}
h=0;
for(int i=s;i<n;i++){
b=abs(h-r[i]);
c=c+b;
printf("head movt from %d to %d=%d\n",h,r[i],b);

h=r[i];
}
printf("total head movt=%d\n",c);


}
