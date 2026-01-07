#include<stdio.h>

int main(){
	int i,j,n1,n2;
	printf("enter 1st size of array :");
	scanf("%d",&n1);
	printf("enter 2nd size of array:");
	scanf("%d",&n2);
	int a[n1];
	printf("1st array elements:");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	int b[n2];
	printf("2nd array elements:");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				printf("common elements:%d",a[i]);
			}
		}
	}
	return 0;
}
