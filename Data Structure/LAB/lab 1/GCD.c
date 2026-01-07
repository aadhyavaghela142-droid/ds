#include <stdio.h>

int main(){
	int a,b,i,ans;
	printf("enter 1st no:");
	scanf("%d",&a);
	printf("enter 2nd no:");
	scanf("%d",&b);
	
	for(i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			ans=i;
		}
	}
	printf("ans:%d",ans);
	return 0;
}
