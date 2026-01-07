#include<stdio.h>

int main(){
	int a,b,i,j,count=0;
	printf("enter no:");
	scanf("%d",&a);
	printf("enter no:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==0){
			printf("%d",i);
		}
		count=0;
	}
	return 0;
}
