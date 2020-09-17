#include <stdio.h>
#include <cmath>
int main(){
	int n,count=0;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n<=1);
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		printf("so %d la so nguyen to",n);
	}else{
		printf("so %d khong phai la so nguyen to ",n);
	}
}
