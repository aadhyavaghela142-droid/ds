#include<stdio.h>

int main(){
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[n];
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	printf("copy array elements:");
	for(i=0;i,n;i++){
		printf("%d",b[i]);
	}
	return 0;
}
