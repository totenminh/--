#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ar[i]);
	}
	int x,y;
	printf("Nhap x: ");
	scanf("%d",&x);
	bool f=false;
	for(int i=0;i<n;i++){
		if(ar[i]<x){
			y=ar[i];
			f=true;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(ar[i]<x&&ar[i]>y){
			y=ar[i];
		}
	}
	if(!f){
		printf("Mang ko co tiem can duoi cua %d",x);
	}else{
		printf("Tiem can duoi cua %d la: %d",x,y);
	}
}

