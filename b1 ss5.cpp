#include <stdio.h>
int main(){
	int n,S=0;
	printf("Nhap so:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		S+=i;
	}
	printf("Tong S la:%d",S);
}
