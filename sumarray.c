#include<stdio.h>
void main(){
	int n,c=0;
	printf("enterlimit");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		c=c+a[i];
	printf("%d",c);
		
}
