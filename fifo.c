#include<stdio.h>

void main()

{

int n,f,i,j,k,count=0;

printf("Enter the number of reference string:");

scanf("%d",&n);

int R[n],avail[n];

printf("Enter the number of frames:");

scanf("%d",&f);

int A[f];

printf("Enter the reference strings:");

for(i=0;i<n;i++)

{

 

scanf("%d",&R[i]);

}

for(i=0;i<f;i++)

{

A[i]=-1;

j=0;

}

printf("Ref String\tPage Frame\n");

for(i=0;i<n;i++)

{

printf("%d\t\t",R[i]);

avail[i]=0;

for(k=0;k<f;k++)

{

if(A[k]==R[i])

{

avail[i]=1;
printf("hit");

}

}

if(avail[i]==0)

{

A[j]=R[i];

j=(j+1)%f;

count++;

 

for(k=0;k<f;k++)

{

if(A[k]==-1)

{

printf("X\t");

}

else

{

printf("%d\t",A[k]);

}

}

}

printf("\n");

}

printf("Page Fault:%d",count);

}
