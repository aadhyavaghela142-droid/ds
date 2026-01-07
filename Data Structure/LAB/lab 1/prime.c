#include <stdio.h>

int main(){
	int n,i,ans;
	printf("enter no:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		 if(n%i==0){
		 	ans++;
		 }
	}
	
	if (ans<0){
		printf("not prime");
	}
	else{
		printf("prime");
	}
	return 0;
}
