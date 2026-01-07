#include<stdio.h>

int main(){
	int i,n,ans,a,b;
	printf("enter size of array:");
	scanf("%d",&n);
	int d[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
	scanf("%d",&d[i]);
	}
	printf("which elements u change? :");
	scanf("%d",&a);
	printf("new elements? :");
	scanf("%d",&b);
	for(i=0;i<n:i++){
		if(d[i]==a){
			d[i]=b;
		}
	}
	printf("final array:");
	for(i=0;i<n;i++){
		printf("%d",d[i]);
	}
	return 0;
}
