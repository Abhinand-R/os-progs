#include<stdio.h>
void main(){
	int n,c=0,temp;
	printf("enterlimit");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		a[i]=a[i]*a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=n-1;i>=0;i--)
		printf("%d ",a[i]);



}
