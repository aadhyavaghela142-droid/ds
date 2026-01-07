#include<stdio.h>

int power(int a,int b){
	int i,sum=1;
	for(i=1;i<=b;i++){
		sum=sum*a;
	}
	return sum;
}

int main(){
	int a,b;
	printf("enter no:");
	scanf("%d",&a);
	printf("enter no:");
	scanf("%d",&b);
	int c = power(a,b); 
	printf("%d",c);
	return 0;
}
