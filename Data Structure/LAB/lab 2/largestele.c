#include<stdio.h>

int main(){
	int i,n,ans;
	printf("enter size of array:");
	scanf("%d",&n);
	int d[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
		scnaf("%d",&d[i]);
	}
	int max=d[0];
	for(i=0;i<n;i++){
		if(d[i]>max){
			max=d[i];
		}
	}
	printf("ans:%d",max);
	return 0;
}
