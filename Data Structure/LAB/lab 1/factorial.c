#include <stdio.h>

int fact(int n){
    int i;
    int sum = 1;
    for(i=1; i<=n;i++){
        sum*=i;
    }
    return sum;
}
int main(){
    int n;
    printf("enter num:");
    scanf("%d",&n);
    int fsum = fact(n);
    printf("fun = %d",fsum);
    return 0;
}