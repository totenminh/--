#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b;
	
	printf("Nhap vao so nguyen a : ");
	scanf("%d", &a);
	
	printf("Nhap vao so nguyen b : ");
	scanf("%d", &b);
	
	if(a >= b){
		printf("%d", a/b);
	}else if(a <= b){
		printf("%d", a*b);
	}
	
}
