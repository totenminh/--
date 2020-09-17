#include <stdio.h>
#include <cmath>
int main(){
	float n,S=0,i=1;
	printf("Nhap so:");
	scanf("%f",&n);
	for(;i<=n;i++){
		S+=1/i;
	}
	printf("Tong S la: %0.2f",S);
}
