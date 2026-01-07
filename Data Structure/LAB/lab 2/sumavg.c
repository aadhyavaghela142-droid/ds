#include<stdio.h>

int main(){
	int i,n,sum=0;
	float avg;
	printf("enter size of array:");
	scanf("%d",&n);
	int d[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
		scnaf("%d",&d[i]);
		sum+=d[i];
	}
	avg = sum/n;
	printf("sum:%d",sum);
	printf("avg:%d",avg);
}
